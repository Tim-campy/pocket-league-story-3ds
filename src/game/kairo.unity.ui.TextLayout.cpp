// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/kairo.unity.util.FastVector.hpp"
#include "generated/kairo.unity.util.FastVector_1.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JInteger.hpp"
#include "kairo.unity.graphics.RectangleF.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.Matrix.hpp"
#include "kairo.unity.ui.Pictograph.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextFormat.hpp"
#include "kairo.unity.ui.TextLayout.TextBlock.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "generated/kairo.unity.util.FastVector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using ShortArray = pls::cs::Array<std::int16_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::ui {

void TextLayout::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(textBlocks_, visitor);
    pls::cs::trace_value(font_, visitor);
    pls::cs::trace_value(text_, visitor);
}

static pls::cs::Array<pls::cs::Ref<TextLayout>> TextLayout_cache__storage{};

static pls::cs::Int32 TextLayout_cachePointer__storage{};

static pls::cs::Int32 TextLayout_DEFAULT_CACHE_SIZE_storage{};

static pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<Pictograph>> TextLayout_pictographList__storage{};

static bool TextLayout_pictographVisible__storage{};

static bool TextLayout_renderRectVisible__storage{};

static StringArray TextLayout_TAG_storage{};

static PLS_NOINLINE void cs_init_87fb4d668ea5580b_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(TextLayout_cache__storage, visitor);
        pls::cs::trace_value(TextLayout_cachePointer__storage, visitor);
        pls::cs::trace_value(TextLayout_DEFAULT_CACHE_SIZE_storage, visitor);
        pls::cs::trace_value(TextLayout_pictographList__storage, visitor);
        pls::cs::trace_value(TextLayout_pictographVisible__storage, visitor);
        pls::cs::trace_value(TextLayout_renderRectVisible__storage, visitor);
        pls::cs::trace_value(TextLayout_TAG_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.TextLayout", flag, []() {
        {
            TextLayout::pictographList_() =
                pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<Pictograph>>::make();
            TextLayout::renderRectVisible_() = false;
            TextLayout::pictographVisible_() = true;
            TextLayout::TAG() =
                StringArray::from({literal(u"<co=>"), literal(u"</co>"), literal(u"<si=>"), literal(u"</si>"),
                                   literal(u"<st=>"), literal(u"</st>"), literal(u"<bl=>"), literal(u"</bl>"),
                                   literal(u"<po=>"), literal(u"<pic=>")});
            TextLayout::DEFAULT_CACHE_SIZE() = 20;
            TextLayout::cache_() =
                pls::cs::Array<pls::cs::Ref<TextLayout>>::make(TextLayout::DEFAULT_CACHE_SIZE());
            TextLayout::cachePointer_() = 0;
        }
    });
}

void TextLayout::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_87fb4d668ea5580b_slow(flag);
}

pls::cs::Array<pls::cs::Ref<TextLayout>>& TextLayout::cache_() {
    TextLayout::ensure_initialized();
    return TextLayout_cache__storage;
}

pls::cs::Int32& TextLayout::cachePointer_() {
    TextLayout::ensure_initialized();
    return TextLayout_cachePointer__storage;
}

pls::cs::Int32& TextLayout::DEFAULT_CACHE_SIZE() {
    TextLayout::ensure_initialized();
    return TextLayout_DEFAULT_CACHE_SIZE_storage;
}

pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<Pictograph>>& TextLayout::pictographList_() {
    TextLayout::ensure_initialized();
    return TextLayout_pictographList__storage;
}

bool& TextLayout::pictographVisible_() {
    TextLayout::ensure_initialized();
    return TextLayout_pictographVisible__storage;
}

bool& TextLayout::renderRectVisible_() {
    TextLayout::ensure_initialized();
    return TextLayout_renderRectVisible__storage;
}

StringArray& TextLayout::TAG() {
    TextLayout::ensure_initialized();
    return TextLayout_TAG_storage;
}

void TextLayout::create_init(pls::cs::Ref<TextLayout> self) {
    TextLayout::ensure_initialized();
    TextLayout::create_init(pls::cs::static_pointer_cast<TextLayout>(self),
                            !PLS_API(kl_util::Language::Japanese()), true);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.#ctor", kairo);
    {
    }
}

void TextLayout::create_init(pls::cs::Ref<TextLayout> self, bool autoScale, bool localizeFontEnable) {
    TextLayout::ensure_initialized();
    self->textBlocks_ = pls::cs::Array<pls::cs::Ref<TextLayout_TextBlock>>::make(0);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.#ctor(System.Boolean,System.Boolean)",
                     kairo);
    {
        self->Init();
        self->autoScale_ = autoScale;
        self->localizeFontEnable_ = localizeFontEnable;
    }
}

// M:kairo.unity.ui.TextLayout.#ctor
pls::cs::Ref<TextLayout> TextLayout::create() {
    TextLayout::ensure_initialized();
    auto self = pls::cs::make_ref<TextLayout>();
    TextLayout::create_init(self);
    return self;
}

// M:kairo.unity.ui.TextLayout.#ctor(System.Boolean,System.Boolean)
pls::cs::Ref<TextLayout> TextLayout::create(bool autoScale, bool localizeFontEnable) {
    TextLayout::ensure_initialized();
    auto self = pls::cs::make_ref<TextLayout>();
    TextLayout::create_init(self, autoScale, localizeFontEnable);
    return self;
}

// M:kairo.unity.ui.TextLayout.Init
void TextLayout::Init() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.Init", kairo);
    {
        font_ = pls::cs::make_ref<pls::kairo::Font>();
        color_ = PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0));
        text_ = literal(u"");
        textHashCode_ = PLS_API(value_hash(text_));
        pos_ = 0;
        beginTime_ = 0ll;
        width_ = -1.0f;
        height_ = -1.0f;
        speed_ = 1000;
        lineSpace_ = Graphics::GetLineSpace();
        textWidth_ = 0.0f;
        anchor_ = 17;
        format_ = false;
        multiLine_ = true;
        SetGraphicsScale(PLS_API(pls::cs::Single(
            require(PLS_API(pls::kairo::IApplication::GetCurrentApp()))->GetScaleRatio(false))));
    }
}

// M:kairo.unity.ui.TextLayout.SetText(System.String)
void TextLayout::SetText(pls::cs::String text) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.SetText(System.String)", kairo);
    {
        if (is_null(text)) {
            text = literal(u"");
        }
        text_ = text;
        textHashCode_ = PLS_API(value_hash(text_));
        pos_ = 0;
        beginTime_ = 0ll;
        if (!adjustFontSize_ && multiLine_) {
            auto cs_left_17 = pls::cs::Int32(PLS_API(require(font_)->GetHeight())) * 100;
            auto cs_right_17 = pls::kairo::Font::requestFontScale;
            pls::cs::Int32 num = cs_left_17 / cs_right_17;
            PLS_API(([&]() -> void {
                auto cs_receiver = font_;
                pls::cs::Int32 cs_arg0 = num * 100 / pls::kairo::Font::requestFontScale;
                require(cs_receiver)->SetSize(cs_arg0, false);
            }()));
            adjustFontSize_ = true;
        }
        _makeTextBlocks();
        pls::cs::Ref<pls::kairo::Font> font = pls::cs::make_ref<pls::kairo::Font>(font_);
        if (autoScale_ && height_ > 0.0f) {
            if (multiLine_ && height_ > 0.0f) {
                while ([&]() -> bool {
                    auto cs_left = height_ + 1.0f;
                    auto cs_right = pls::cs::Single(GetHeight());
                    return cs_left < cs_right;
                }()) {
                    pls::cs::Int32 num2 = pls::cs::Int32(PLS_API(require(font_)->GetHeight())) - 1;
                    PLS_API(require(font_)->SetSize(num2, false));
                    _makeTextBlocks();
                    if (num2 == 1) {
                        break;
                    }
                }
                if ([&]() -> bool {
                        auto cs_left = height_;
                        auto cs_right = pls::cs::Single(GetHeight());
                        return cs_left < cs_right;
                    }()) {
                    height_ = GetHeight();
                }
            } else if (!multiLine_ && width_ > 0.0f) {
                while (width_ < textWidth_) {
                    pls::cs::Int32 num3 = pls::cs::Int32(PLS_API(require(font_)->GetHeight())) - 1;
                    PLS_API(require(font_)->SetSize(num3, false));
                    _makeTextBlocks();
                    if (num3 == 1) {
                        break;
                    }
                }
            }
        }
        length_ = 0;
        for (pls::cs::Int32 i = 0; i < textBlocks_.length(); ++i) {
            if (require(textBlocks_.get_Item(i))->isPictograph_) {
                ++length_;
            } else {
                {
                    auto cs_target = this;
                    auto cs_old = require(cs_target)->length_;
                    auto cs_rhs = kl_lang::StringEx::Length(require(textBlocks_.get_Item(i))->text_);
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    require(cs_target)->length_ = cs_value;
                }
            }
        }
        font_ = font;
    }
}

// M:kairo.unity.ui.TextLayout.GetText
pls::cs::String TextLayout::GetText() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.GetText", kairo);
    {
        return text_;
    }
}

// M:kairo.unity.ui.TextLayout._makeTextBlocks
void TextLayout::_makeTextBlocks() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout._makeTextBlocks", kairo);
    {
        bool flag{};
        pls::cs::Ref<pls::kairo::Font> font{};
        bool flag2{};
        pls::cs::Int32 blink{};
        pls::cs::Int32 colorOfRGB{};
        pls::cs::Int32 num{};
        pls::cs::Int32 num2{};
        pls::cs::Ref<pls::kairo::Font> font2{};
        pls::cs::Int32 height{};
        pls::cs::Single num3{};
        pls::cs::Single num4{};
        pls::cs::Single num5{};
        pls::cs::Int32 num6{};
        pls::cs::String text{};
        bool flag3{};
        bool flag4{};
        pls::cs::Ref<TextLayout_TextBlock> textBlock{};
        pls::cs::Ref<kl_util::FastVector> fastVector{};
        pls::cs::Int32 i{};
        char16_t c{};
        bool flag5{};
        pls::cs::Int32 num7{};
        StringArray array{};
        pls::cs::Int32 num8{};
        pls::cs::Int32 num9{};
        pls::cs::String text2{};
        pls::cs::Int32 j{};
        pls::cs::Int32 num10{};
        pls::cs::Int32 num11{};
        pls::cs::String text3{};
        StringArray array2{};
        pls::cs::Ref<Pictograph> pictograph{};
        pls::cs::Int32 num12{};
        pls::cs::Int32 num13{};
        pls::cs::Single x{};
        pls::cs::Single y{};
        IntArray boundingRect{};
        ShortArray boundingRect2{};
        pls::cs::Single num14{};
        pls::cs::Single num15{};
        bool flag6{};
        pls::cs::Int32 num16{};
        pls::cs::Int32 k{};
        pls::cs::Single num17{};
        pls::cs::Int32 l{};
        char16_t c2{};
        pls::cs::Int32 num18{};
        pls::cs::Int32 m{};
        pls::cs::Ref<TextLayout_TextBlock> textBlock2{};
        pls::cs::Int32 n{};
        pls::cs::Ref<TextLayout_TextBlock> textBlock3{};
        pls::cs::Int32 num19{};
        pls::cs::Int32 num20{};
        {
            overArea_ = false;
            if (kl_lang::StringEx::Length(text_) == 0) {
                textBlocks_ = pls::cs::Array<pls::cs::Ref<TextLayout_TextBlock>>::make(0);
                return;
            }
            PLS_API(pls::kairo::Graphics::PushAutoTextLayout(false));
            flag = false;
            if (!PLS_API(kl_util::Language::Japanese()) && multiLine_ && PLS_API(([&]() {
                    auto cs_text = text_;
                    auto cs_char = u' ';
                    return index_char1(cs_text, cs_char) != -1;
                }()))) {
                flag = true;
            }
            font = font_;
            if (!localizeFontEnable_) {
                PLS_API(pls::kairo::Font::PushLocalizeSetting(false));
            }
            flag2 = PLS_API(require(font_)->IsNeedLocalizeScale());
            if (flag2) {
                font_ = pls::cs::make_ref<pls::kairo::Font>(font_);
                PLS_API(([&]() -> void {
                    auto cs_receiver = font_;
                    pls::cs::Int32 cs_arg0 = PLS_API(require(font_)->GetLocalizeScale());
                    require(cs_receiver)->SetSize(cs_arg0, true);
                }()));
                PLS_API(pls::kairo::Font::PushLocalizeSetting(false));
            }
            pls::cs::run_finally(
                [&]() {
                    {
                        {
                            auto cs_value = true;
                            pls::kairo::Font::LT_DISABLE_TEXTLAYOUT = cs_value;
                        }
                        blink = 0;
                        colorOfRGB = color_;
                        num = (anchor_ & 7);
                        num2 = (anchor_ & 0x70);
                        font2 = pls::cs::make_ref<pls::kairo::Font>(font_);
                        PLS_API(require(font2)->AdjustFontSize(scaleRatio_));
                        height = PLS_API(require(font_)->GetHeight());
                        num3 = 0.0f;
                        num4 = 0.0f;
                        num5 = 0.0f;
                        num6 = 0;
                        textWidth_ = 0.0f;
                        text = PLS_API(kl_util::StringUtil::Replace(
                            PLS_API(kl_util::Language::TranslateText(text_, true)), literal(u"<br>"),
                            literal(u"\n")));
                        flag3 = true;
                        flag4 = true;
                        textBlock = pls::cs::Ref<TextLayout_TextBlock>{};
                        fastVector = kl_util::FastVector::create();
                        for (i = 0; i < kl_lang::StringEx::Length(text); ++i) {
                            c = kl_lang::StringEx::CharAt(text, i);
                            flag5 = false;
                            num7 = 0;
                            array = StringArray{};
                            num8 = 0;
                            if ((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                                 pls::cs::cast_integral<pls::cs::Int32>(u'<')) &&
                                (([&]() {
                                    pls::cs::Int32 cs_value = PLS_API(index_char2(text, u'>', i));
                                    num8 = cs_value;
                                    return cs_value;
                                }())) != -1) {
                                if (num8 - i > 32) {
                                    continue;
                                }
                                num9 = -1;
                                text2 = kl_lang::StringEx::SubstringJ(text, i, num8 + 1);
                                for (j = 0; j < TextLayout::TAG().length(); ++j) {
                                    if (PLS_API(pls::cs::culture_compare_to(TextLayout::TAG()[j], text2)) ==
                                            0 ||
                                        (PLS_API(index_char1(TextLayout::TAG()[j], u'=')) != -1 &&
                                         PLS_API(index_char1(text2, u'=')) != -1 &&
                                         PLS_API(pls::cs::culture_starts_with(
                                             text2, PLS_API(([&]() -> pls::cs::String {
                                                 auto cs_arg0 = TextLayout::TAG()[j];
                                                 auto cs_arg1 = 0;
                                                 auto cs_arg2 =
                                                     pls::cs::Int32(
                                                         PLS_API(index_char1(TextLayout::TAG()[j], u'='))) +
                                                     1;
                                                 return substring2(cs_arg0, cs_arg1, cs_arg2);
                                             }())))))) {
                                        num9 = j;
                                        break;
                                    }
                                }
                                if (num9 != -1) {
                                    i = num8;
                                    num10 = 0;
                                    num11 = 0;
                                    text3 = literal(u"");
                                    if (PLS_API(index_char1(text2, u'=')) != -1) {
                                        text3 = ([&]() -> pls::cs::String {
                                            pls::cs::String cs_arg0 = text2;
                                            pls::cs::Int32 cs_arg1 =
                                                pls::cs::Int32(PLS_API(index_char1(text2, u'='))) + 1;
                                            pls::cs::Int32 cs_arg2 = kl_lang::StringEx::Length(text2) - 1;
                                            return kl_lang::StringEx::SubstringJ(cs_arg0, cs_arg1, cs_arg2);
                                        }());
                                        try {
                                            num10 = PLS_API(kl_lang::JInteger::ParseInt(text3));
                                        } catch (const pls::cs::Exception& cs_caught_29) {
                                            pls::cs::capture_exception(cs_caught_29);
                                            {
                                            }
                                        }
                                        try {
                                            num11 = java::lang::JInteger::ParseInt(text3, 16);
                                        } catch (const pls::cs::Exception& cs_caught_30) {
                                            pls::cs::capture_exception(cs_caught_30);
                                            {
                                            }
                                        }
                                        if (num9 == 0 && num11 == 0 &&
                                            PLS_API(index_char1(text3, u',')) != -1) {
                                            array2 =
                                                PLS_API(kl_util::StringUtil::Split(text3, literal(u",")));
                                            if (array2.length() != 0) {
                                                num11 =
                                                    (num11 |
                                                     (PLS_API(kl_lang::JInteger::ParseInt(array2[0])) << 16));
                                            }
                                            if (1 < array2.length()) {
                                                num11 =
                                                    (num11 |
                                                     (PLS_API(kl_lang::JInteger::ParseInt(array2[1])) << 8));
                                            }
                                            if (2 < array2.length()) {
                                                num11 =
                                                    (num11 | PLS_API(kl_lang::JInteger::ParseInt(array2[2])));
                                            }
                                        }
                                    }
                                    {
                                        if ((num9 == 0)) {
                                            colorOfRGB = PLS_API(pls::kairo::Graphics::GetColorOfRGB(
                                                (num11 >> 16) & 0xFF, (num11 >> 8) & 0xFF, num11 & 0xFF));
                                        } else if ((num9 == 1)) {
                                            colorOfRGB = color_;
                                        } else if ((num9 == 2)) {
                                            PLS_API(require(font2)->SetSize(num10, true));
                                            if (height < PLS_API(require(font2)->GetHeight())) {
                                                height = PLS_API(require(font2)->GetHeight());
                                            }
                                        } else if ((num9 == 3)) {
                                            PLS_API(([&]() -> void {
                                                pls::cs::Int32 cs_arg0 = PLS_API(require(font_)->GetSize());
                                                require(font2)->SetSize(cs_arg0, true);
                                            }()));
                                            if (height < PLS_API(require(font2)->GetHeight())) {
                                                height = PLS_API(require(font2)->GetHeight());
                                            }
                                        } else if ((num9 == 4)) {
                                            PLS_API(require(font2)->SetStyle(num10));
                                        } else if ((num9 == 5)) {
                                            PLS_API(([&]() -> void {
                                                pls::cs::Int32 cs_arg0 = PLS_API(require(font_)->GetStyle());
                                                require(font2)->SetStyle(cs_arg0);
                                            }()));
                                        } else if ((num9 == 6)) {
                                            blink = num10;
                                        } else if ((num9 == 7)) {
                                            blink = 0;
                                        } else if ((num9 == 8)) {
                                            if (PLS_API(index_char1(text3, u'l')) != -1) {
                                                num = 1;
                                            }
                                            if (PLS_API(index_char1(text3, u'c')) != -1) {
                                                num = 2;
                                            }
                                            if (PLS_API(index_char1(text3, u'r')) != -1) {
                                                num = 4;
                                            }
                                            if (PLS_API(index_char1(text3, u't')) != -1) {
                                                num2 = 16;
                                            }
                                            if (PLS_API(index_char1(text3, u'm')) != -1) {
                                                num2 = 32;
                                            }
                                            if (PLS_API(index_char1(text3, u'b')) != -1) {
                                                num2 = 64;
                                            }
                                            num3 = 0.0f;
                                            num4 = 0.0f;
                                        } else if ((num9 == 9)) {
                                            {
                                                flag5 = true;
                                                array =
                                                    PLS_API(kl_util::StringUtil::Split(text3, literal(u",")));
                                                pictograph = TextLayout::GetPictograph(array[0]);
                                                if (is_null(pictograph)) {
                                                    goto cs_label_recoveredSwitchExit_11784;
                                                }
                                                num12 = Pictograph::get_Frame(pictograph);
                                                if (1 < array.length() && (array[1].length() > 0)) {
                                                    if ((array[1] == literal(u"∞"))) {
                                                        num12 = -1;
                                                    } else {
                                                        num12 = PLS_API(pls::cs::int32_parse(array[1]));
                                                    }
                                                }
                                                num13 = Pictograph::get_X(pictograph);
                                                if (3 < array.length() && (array[3].length() > 0)) {
                                                    num13 = PLS_API(pls::cs::int32_parse(array[3]));
                                                }
                                                x = pls::cs::Single{};
                                                y = pls::cs::Single{};
                                                if (num12 == -1) {
                                                    boundingRect = require(Pictograph::get_Seb(pictograph))
                                                                       ->GetBoundingRect();
                                                    x = boundingRect[0] + boundingRect[2];
                                                    y = boundingRect[1] + boundingRect[3];
                                                } else {
                                                    if (num12 >= require(Pictograph::get_Seb(pictograph))
                                                                     ->GetMaxFrame()) {
                                                        num12 = require(Pictograph::get_Seb(pictograph))
                                                                    ->GetMaxFrame() -
                                                                1;
                                                    }
                                                    boundingRect2 = require(Pictograph::get_Seb(pictograph))
                                                                        ->GetBoundingRect(num12);
                                                    x = boundingRect2[0] + boundingRect2[2];
                                                    y = boundingRect2[1] + boundingRect2[3];
                                                }
                                                {
                                                    auto cs_receiver = static_cast<pls::cs::Ref<Matrix>>(
                                                        Pictograph::get_Transform(pictograph));
                                                    if (!cs_receiver)
                                                        throw pls::cs::NullReferenceException();
                                                    auto& cs_arg0 = x;
                                                    auto& cs_arg1 = y;
                                                    cs_receiver->MapPoints(cs_arg0, cs_arg1);
                                                }
                                                num7 = num13 + pls::cs::to_int32((x + 0.9f)) +
                                                       Pictograph::get_Margin(pictograph);
                                                num14 =
                                                    pls::cs::Single(PLS_API(require(font2)->GetHeight())) /
                                                    12.0f;
                                                num7 = pls::cs::to_int32(
                                                    (pls::cs::Single(num7) * num14 + 0.01f));
                                            }
                                        }
                                    cs_label_recoveredSwitchExit_11784:;
                                        ;
                                    }
                                    flag3 = true;
                                    if (!flag5) {
                                        continue;
                                    }
                                }
                            }
                            num15 = 0.0f;
                            if (flag5) {
                                num15 = num7;
                            } else if ((pls::cs::cast_integral<pls::cs::Int32>(c) !=
                                        pls::cs::cast_integral<pls::cs::Int32>(char16_t(10))) &&
                                       (pls::cs::cast_integral<pls::cs::Int32>(c) !=
                                        pls::cs::cast_integral<pls::cs::Int32>(char16_t(13)))) {
                                if (!is_null(textBlock)) {
                                    num15 = (([&]() -> pls::cs::FloatEval {
                                        auto cs_left = PLS_API(pls::cs::Single(
                                            require(font2)->StringWidthF(pls::cs::String::concat(
                                                require(textBlock)->text_, char_string(c)))));
                                        auto cs_right = require(textBlock)->width_;
                                        return cs_left - cs_right;
                                    }()));
                                } else {
                                    num15 = PLS_API(pls::cs::Single(([&]() -> pls::cs::Single {
                                        pls::cs::String cs_arg0 = PLS_API(kl_lang::JString::ValueOf(c));
                                        return require(font2)->StringWidthF(cs_arg0);
                                    }())));
                                }
                            }
                            flag6 = (pls::cs::cast_integral<pls::cs::Int32>(c) ==
                                     pls::cs::cast_integral<pls::cs::Int32>(char16_t(10)));
                            if (!flag6 && width_ != -1.0f && num5 + num15 > width_ - num3 && multiLine_) {
                                if (format_ && ((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                                                 pls::cs::cast_integral<pls::cs::Int32>(char16_t(12290))) ||
                                                (pls::cs::cast_integral<pls::cs::Int32>(c) ==
                                                 pls::cs::cast_integral<pls::cs::Int32>(char16_t(12289))))) {
                                    num15 = 0.0f;
                                } else {
                                    flag6 = true;
                                }
                            }
                            if (flag && flag4 &&
                                (pls::cs::cast_integral<pls::cs::Int32>(c) !=
                                 pls::cs::cast_integral<pls::cs::Int32>(u' '))) {
                                num16 = kl_lang::StringEx::Length(text);
                                for (k = i; k < kl_lang::StringEx::Length(text); ++k) {
                                    if ((pls::cs::cast_integral<pls::cs::Int32>(kl_lang::StringEx::CharAt(
                                             text, k)) == pls::cs::cast_integral<pls::cs::Int32>(u' ')) ||
                                        (pls::cs::cast_integral<pls::cs::Int32>(
                                             kl_lang::StringEx::CharAt(text, k)) ==
                                         pls::cs::cast_integral<pls::cs::Int32>(char16_t(10))) ||
                                        kl_lang::StringEx::StartsWith(text, literal(u"<br>"), k)) {
                                        num16 = k;
                                        break;
                                    }
                                }
                                if (num16 - i > 0) {
                                    num17 = 0.0f;
                                    for (l = i; l < num16; ++l) {
                                        c2 = kl_lang::StringEx::CharAt(text, l);
                                        if ((pls::cs::cast_integral<pls::cs::Int32>(c2) ==
                                             pls::cs::cast_integral<pls::cs::Int32>(u'<')) &&
                                            (kl_lang::StringEx::StartsWith(text, literal(u"<co="), l) ||
                                             kl_lang::StringEx::StartsWith(text, literal(u"<si="), l) ||
                                             kl_lang::StringEx::StartsWith(text, literal(u"<st="), l) ||
                                             kl_lang::StringEx::StartsWith(text, literal(u"<po="), l) ||
                                             kl_lang::StringEx::StartsWith(text, literal(u"<bl="), l) ||
                                             kl_lang::StringEx::StartsWith(text, literal(u"</"), l) ||
                                             kl_lang::StringEx::StartsWith(text, literal(u"<br>"), l))) {
                                            num18 = PLS_API(index_char2(text, u'>', l + 1));
                                            if (num18 != -1) {
                                                l = num18;
                                                continue;
                                            }
                                        }
                                        num17 = num17 + PLS_API(pls::cs::Single(([&]() -> pls::cs::Single {
                                                    pls::cs::String cs_arg0 =
                                                        PLS_API(kl_lang::JString::ValueOf(c2));
                                                    return require(font2)->StringWidthF(cs_arg0);
                                                }())));
                                    }
                                    if (width_ != -1.0f && num5 + num17 > width_ - num3) {
                                        if (i == 0) {
                                            flag = false;
                                        } else {
                                            flag6 = true;
                                        }
                                    }
                                }
                                flag4 = false;
                            }
                            if (!PLS_API(kl_util::Language::Japanese()) &&
                                (pls::cs::cast_integral<pls::cs::Int32>(c) ==
                                 pls::cs::cast_integral<pls::cs::Int32>(u' '))) {
                                flag4 = true;
                                if (flag6) {
                                    num15 = 0.0f;
                                }
                            }
                            if (flag6) {
                                if (num == 2) {
                                    if (width_ == -1.0f) {
                                        num3 = (num3 - num5 / 2.0f);
                                    } else {
                                        num3 = (num3 + (width_ - num3) / 2.0f - num5 / 2.0f);
                                    }
                                }
                                if (num == 4) {
                                    if (!((width_ != -1.0f))) {
                                        num3 = (num3 - num5);
                                    } else {
                                        num3 = (width_ - num5);
                                    }
                                }
                                for (m = num6; m < PLS_API(kl_util::FastVector_2_Size(require(fastVector)));
                                     ++m) {
                                    textBlock2 = pls::cs::unbox<pls::cs::Ref<TextLayout_TextBlock>>(
                                        PLS_API(kl_util::FastVector_2_ElementAt(require(fastVector), m)));
                                    require(textBlock2)->x_ = num3;
                                    {
                                        auto cs_target = textBlock2;
                                        pls::cs::Single cs_value =
                                            num4 +
                                            pls::cs::Single(
                                                ((height -
                                                  PLS_API(require(require(textBlock2)->font_)->GetHeight())) /
                                                 2));
                                        require(cs_target)->y_ = cs_value;
                                    }
                                    num3 = num3 + require(textBlock2)->width_;
                                }
                                num5 = 0.0f;
                                num6 = PLS_API(kl_util::FastVector_2_Size(require(fastVector)));
                                num3 = 0.0f;
                                num4 = num4 + pls::cs::Single((height + lineSpace_));
                                height = PLS_API(require(font2)->GetHeight());
                                flag3 = true;
                            }
                            if ((num15 > 0.0f || flag5) && flag3) {
                                textBlock =
                                    TextLayout_TextBlock::create(this, font2, colorOfRGB, 0.0f, 0.0f, blink);
                                PLS_API(kl_util::FastVector_2_AddElement(require(fastVector),
                                                                         pls::cs::box(textBlock)));
                                flag3 = false;
                            }
                            if (flag5) {
                                require(textBlock)->isPictograph_ = true;
                                require(textBlock)->pictographParam_ = array;
                                require(textBlock)->width_ = num7;
                                num5 = num5 + pls::cs::Single(num7);
                                if (textWidth_ < num5) {
                                    textWidth_ = num5;
                                }
                                textBlock =
                                    TextLayout_TextBlock::create(this, font2, colorOfRGB, 0.0f, 0.0f, blink);
                                PLS_API(kl_util::FastVector_2_AddElement(require(fastVector),
                                                                         pls::cs::box(textBlock)));
                            } else if (num15 > 0.0f) {
                                num15 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left = PLS_API(pls::cs::Single(require(font2)->StringWidthF(
                                        pls::cs::String::concat(require(textBlock)->text_, char_string(c)))));
                                    auto cs_right = require(textBlock)->width_;
                                    return cs_left - cs_right;
                                }());
                                require(textBlock)->text_ =
                                    pls::cs::String::concat(require(textBlock)->text_, char_string(c));
                                require(textBlock)->width_ = require(textBlock)->width_ + num15;
                                num5 = num5 + num15;
                                if (textWidth_ < num5) {
                                    textWidth_ = num5;
                                }
                            }
                        }
                        if (num6 < PLS_API(kl_util::FastVector_2_Size(require(fastVector)))) {
                            if (num == 2) {
                                if (!((width_ != -1.0f))) {
                                    num3 = (num3 - num5 / 2.0f);
                                } else {
                                    num3 = (num3 + (width_ - num3) / 2.0f - num5 / 2.0f);
                                }
                            }
                            if (num == 4) {
                                if (!((width_ != -1.0f))) {
                                    num3 = (num3 - num5);
                                } else {
                                    num3 = (width_ - num5);
                                }
                            }
                            for (n = num6; n < PLS_API(kl_util::FastVector_2_Size(require(fastVector)));
                                 ++n) {
                                textBlock3 = pls::cs::unbox<pls::cs::Ref<TextLayout_TextBlock>>(
                                    PLS_API(kl_util::FastVector_2_ElementAt(require(fastVector), n)));
                                require(textBlock3)->x_ = num3;
                                {
                                    auto cs_target = textBlock3;
                                    pls::cs::Single cs_value =
                                        num4 +
                                        pls::cs::Single(
                                            ((height -
                                              PLS_API(require(require(textBlock3)->font_)->GetHeight())) /
                                             2));
                                    require(cs_target)->y_ = cs_value;
                                }
                                num3 = num3 + require(textBlock3)->width_;
                            }
                            num4 = num4 + pls::cs::Single(height);
                        }
                        if (num2 == 32) {
                            if (height_ == -1.0f) {
                                num4 = -num4 / 2.0f;
                            } else {
                                num4 = (height_ - num4) / 2.0f;
                            }
                        } else if (num2 == 64) {
                            if (height_ == -1.0f) {
                                num4 = -num4;
                            } else {
                                num4 = height_ - num4;
                            }
                        } else {
                            num4 = 0.0f;
                        }
                        if (height_ != -1.0f && num4 < 0.0f) {
                            num4 = 0.0f;
                        }
                        textBlocks_ = pls::cs::Array<pls::cs::Ref<TextLayout_TextBlock>>::make(
                            PLS_API(kl_util::FastVector_2_Size(require(fastVector))));
                        for (num19 = 0; num19 < textBlocks_.length(); ++num19) {
                            {
                                auto cs_target = textBlocks_;
                                auto cs_index = num19;
                                auto cs_value = pls::cs::unbox<pls::cs::Ref<TextLayout_TextBlock>>(
                                    PLS_API(kl_util::FastVector_2_ElementAt(require(fastVector), num19)));
                                cs_target.set_Item(cs_index, cs_value);
                            }
                            {
                                auto cs_target = textBlocks_.get_Item(num19);
                                auto cs_old = require(cs_target)->y_;
                                auto cs_rhs = num4;
                                pls::cs::Single cs_value = cs_old + cs_rhs;
                                require(cs_target)->y_ = cs_value;
                            }
                        }
                    }
                },
                [&]() {
                    {
                        auto cs_value = false;
                        pls::kairo::Font::LT_DISABLE_TEXTLAYOUT = cs_value;
                    }
                    if (flag2) {
                        PLS_API(pls::kairo::Font::PopLocalizeSetting());
                        font_ = font;
                    }
                    if (!localizeFontEnable_) {
                        PLS_API(pls::kairo::Font::PopLocalizeSetting());
                    }
                    PLS_API(pls::kairo::Graphics::PopAutoTextLayout());
                    if (width_ != -1.0f) {
                        for (num20 = 0; num20 < textBlocks_.length(); ++num20) {
                            if (([&]() -> bool {
                                    auto cs_left = ([&]() -> pls::cs::FloatEval {
                                        auto cs_left = require(textBlocks_.get_Item(num20))->x_;
                                        auto cs_right = require(textBlocks_.get_Item(num20))->width_;
                                        return cs_left + cs_right;
                                    }());
                                    auto cs_right = width_;
                                    return cs_left > cs_right;
                                }()) ||
                                ([&]() -> bool {
                                    auto cs_left = ([&]() -> pls::cs::FloatEval {
                                        auto cs_left = require(textBlocks_.get_Item(num20))->y_;
                                        auto cs_right = pls::cs::Single(
                                            PLS_API(require(require(textBlocks_.get_Item(num20))->font_)
                                                        ->GetHeight()));
                                        return cs_left + cs_right;
                                    }());
                                    auto cs_right = height_;
                                    return cs_left > cs_right;
                                }())) {
                                overArea_ = true;
                                break;
                            }
                        }
                    }
                });
        }
    }
}

// M:kairo.unity.ui.TextLayout.GetHeight
pls::cs::Int32 TextLayout::GetHeight() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.GetHeight", kairo);
    {
        pls::cs::Single num = 0.0f;
        for (pls::cs::Int32 i = 0; i < textBlocks_.length(); ++i) {
            pls::cs::Ref<TextLayout_TextBlock> textBlock = textBlocks_.get_Item(i);
            if (kl_lang::StringEx::Length(require(textBlock)->text_) != 0 &&
                ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(textBlock)->y_;
                    auto cs_right = pls::cs::Single(PLS_API(require(require(textBlock)->font_)->GetHeight()));
                    return cs_left + cs_right;
                }()) > num) {
                num = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(textBlock)->y_;
                    auto cs_right = pls::cs::Single(PLS_API(require(require(textBlock)->font_)->GetHeight()));
                    return cs_left + cs_right;
                }());
            }
        }
        return pls::cs::to_int32((num + 0.9f));
    }
}

// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.Single,System.Single)
void TextLayout::Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single dx, pls::cs::Single dy) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.Single,System.Single)",
                     kairo);
    {
        Draw(g, dx, dy, 0);
    }
}

// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void TextLayout::Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single dx, pls::cs::Single dy,
                      pls::cs::Int32 scrollV) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)",
        kairo);
    {
        bool flag = false;
        if (PLS_API(require(g)->CheckLocalMatrix())) {
            PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
            PLS_API(require(font_)->GetHeight());
            PLS_API(pls::cs::Single(require(font_)->GetWidth()));
            pls::cs::Ref<graphics::RectangleF> transRectGUI =
                PLS_API(([&]() -> pls::cs::Ref<graphics::RectangleF> {
                    pls::cs::Single cs_arg2 = PLS_API(pls::cs::Single(require(font_)->GetWidth()));
                    pls::cs::Single cs_arg3 = PLS_API(require(font_)->GetHeight());
                    return PlsPortGeneratedBootstrap::Source::GetGraphicsTransRectGUI(
                        require(g), 0.0f, 0.0f, cs_arg2, cs_arg3, pls::cs::Ref<graphics::RectangleF>{});
                }()));
            auto cs_left_54 = require(transRectGUI)->Width();
            auto cs_right_54 = PLS_API(pls::cs::Single(require(font_)->GetWidth()));
            pls::cs::Single num = cs_left_54 / cs_right_54;
            pls::cs::Single num2 = ([&]() -> pls::cs::FloatEval {
                                       auto cs_left = require(transRectGUI)->Height();
                                       auto cs_right = pls::cs::Single(PLS_API(require(font_)->GetHeight()));
                                       return cs_left / cs_right;
                                   }()) /
                                   num;
            if (num2 < 1.0f) {
                flag = true;
                PLS_API(([&]() -> void {
                    pls::cs::Ref<Matrix> cs_arg0 = Matrix::ScaleTemporary(num2, 1.0f, 0.0f, 0.0f);
                    PlsPortGeneratedBootstrap::Source::PushGraphicsMatrix(require(g), cs_arg0);
                }()));
            }
        }
        PLS_API(([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            if (!cs_receiver)
                throw pls::cs::NullReferenceException();
            auto& cs_arg0 = dx;
            auto& cs_arg1 = dy;
            cs_receiver->BeginLocalCoordination(cs_arg0, cs_arg1);
        }()));
        pls::cs::run_finally(
            [&]() {
                {
                    PLS_API(pls::kairo::Graphics::PushAutoTextLayout(false));
                    if ([&]() -> bool {
                            auto cs_left = PLS_API(pls::cs::Single(require(g)->GetScale()));
                            auto cs_right = scaleRatio_;
                            return cs_left != cs_right;
                        }()) {
                        SetGraphicsScale(PLS_API(pls::cs::Single(require(g)->GetScale())));
                        _makeTextBlocks();
                    }
                    PLS_API(pls::kairo::Font::PushLocalizeSetting(false));
                    pls::cs::Int32 num3 = 0;
                    if (!PLS_API(kl_util::Language::Japanese()) && 0.0f < height_) {
                        num3 = 2;
                    }
                    if (TextLayout::renderRectVisible_() && width_ != -1.0f && height_ != -1.0f) {
                        PLS_API(require(g)->SetColor(0, 255, 0));
                        Graphics::DrawRect2(require(g), dx - 2.0f, dy - 2.0f, width_ + 4.0f, height_ + 4.0f);
                    }
                    if (textCheckSize_ != 0 && autoScale_ && width_ != -1.0f && height_ != -1.0f) {
                        pls::cs::Int32 height = textCheckSize_;
                        if (height == -1) {
                            height = PLS_API(require(font_)->GetHeight());
                        }
                        pls::cs::Int32 renderingFontSize = GetRenderingFontSize();
                        if (renderingFontSize != -1 &&
                            renderingFontSize != PLS_API(require(font_)->GetHeight()) &&
                            renderingFontSize < height) {
                            PLS_API(require(g)->SetColor(255, 0, 0));
                            Graphics::DrawRect2(require(g), dx - 2.0f, dy - 2.0f, width_ + 4.0f,
                                                height_ + 4.0f);
                            Graphics::DrawRect2(require(g), dx - 3.0f, dy - 3.0f, width_ + 6.0f,
                                                height_ + 6.0f);
                        }
                    }
                    if (overArea_) {
                        PLS_API(require(g)->ClipRect(dx, dy, width_, height_ + pls::cs::Single(num3), true));
                    }
                    pls::cs::Int32 num4 = pos_ / 1000;
                    for (pls::cs::Int32 i = 0; i < textBlocks_.length(); ++i) {
                        if (num4 <= 0) {
                            break;
                        }
                        num4 -= ([&]() -> pls::cs::Int32 {
                            auto cs_receiver = textBlocks_.get_Item(i);
                            pls::cs::Single cs_arg4 = height_;
                            return require(cs_receiver)
                                ->Draw(g, dx, dy - pls::cs::Single(scrollV), dy, cs_arg4, num4);
                        }());
                    }
                }
            },
            [&]() {
                PLS_API(pls::kairo::Font::PopLocalizeSetting());
                PLS_API(require(g)->EndLocalCoordination());
                if (flag) {
                    PLS_API(require(g)->PopMatrix());
                }
                PLS_API(pls::kairo::Graphics::PopAutoTextLayout());
            });
        if (overArea_) {
            PLS_API(require(g)->PopClip());
        }
        if (draw_ < 2147483647 /* Int32.MaxValue */) {
            ++draw_;
        }
    }
}

// M:kairo.unity.ui.TextLayout.Frame
void TextLayout::Frame() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.Frame", kairo);
    {
        if (beginTime_ == 0ll) {
            beginTime_ = PLS_API(kl_lang::JSystem::CurrentTimeMillis()) - pls::cs::Int64(50);
        }
        pls::cs::Int64 num = ([&]() -> pls::cs::Int64 {
                                 auto cs_left = (([&]() -> pls::cs::Int64 {
                                     auto cs_left = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
                                     auto cs_right = beginTime_;
                                     return cs_left - cs_right;
                                 }()));
                                 auto cs_right =
                                     pls::cs::Int64(pls::cs::cast_integral<pls::cs::Int64>(speed_));
                                 return cs_left * cs_right;
                             }()) /
                             pls::cs::Int64(50);
        if (num < pls::cs::cast_integral<pls::cs::Int64>(0)) {
            num = 0ll;
        }
        if (num > pls::cs::cast_integral<pls::cs::Int64>(length_ * 1000)) {
            num = pls::cs::cast_integral<pls::cs::Int64>(length_ * 1000);
        }
        pos_ = pls::cs::to_int32(num);
        for (pls::cs::Int32 i = 0; i < textBlocks_.length(); ++i) {
            if (require(textBlocks_.get_Item(i))->blink_ > 0) {
                {
                    auto cs_target = textBlocks_.get_Item(i);
                    auto cs_left_235 = (require(textBlocks_.get_Item(i))->blinkCnt_ + 1);
                    auto cs_right_235 = (require(textBlocks_.get_Item(i))->blink_ * 2);
                    pls::cs::Int32 cs_value = cs_left_235 % cs_right_235;
                    require(cs_target)->blinkCnt_ = cs_value;
                }
            }
        }
        if (frame_ < 2147483647 /* Int32.MaxValue */) {
            ++frame_;
        }
    }
}

// M:kairo.unity.ui.TextLayout.SetSpeed(System.Int32)
void TextLayout::SetSpeed(pls::cs::Int32 speed) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.SetSpeed(System.Int32)", kairo);
    {
        speed_ = speed;
        if (!PLS_API(kl_util::Language::Japanese())) {
            speed_ = speed_ * 3 / 2;
        }
    }
}

// M:kairo.unity.ui.TextLayout.SetColor(System.Int32)
void TextLayout::SetColor(pls::cs::Int32 color) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.SetColor(System.Int32)", kairo);
    {
        color_ = color;
    }
}

// M:kairo.unity.ui.TextLayout.SetFontSize(System.Int32)
void TextLayout::SetFontSize(pls::cs::Int32 size) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.SetFontSize(System.Int32)", kairo);
    {
        adjustFontSize_ = false;
        PLS_API(require(font_)->SetSize(size, true));
    }
}

// M:kairo.unity.ui.TextLayout.SetAnchor(System.Int32)
void TextLayout::SetAnchor(pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.SetAnchor(System.Int32)", kairo);
    {
        anchor_ = anchor;
    }
}

// M:kairo.unity.ui.TextLayout.Flush
void TextLayout::Flush() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.Flush", kairo);
    {
        pos_ = length_ * 1000;
        beginTime_ = ([&]() -> pls::cs::Int64 {
            auto cs_left = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
            auto cs_right =
                pls::cs::Int64((length_ * 1000)) * 1000ll / pls::cs::Int64(speed_) / pls::cs::Int64(20);
            return cs_left - cs_right;
        }());
    }
}

// M:kairo.unity.ui.TextLayout.IsEnd
bool TextLayout::IsEnd() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.IsEnd", kairo);
    {
        if (pos_ != -1) {
            return pos_ >= length_ * 1000;
        }
        return true;
    }
}

// M:kairo.unity.ui.TextLayout.SetSize(System.Single,System.Single)
void TextLayout::SetSize(pls::cs::Single w, pls::cs::Single h) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.SetSize(System.Single,System.Single)",
                     kairo);
    {
        width_ = w;
        height_ = h;
    }
}

// M:kairo.unity.ui.TextLayout.SetLineSpace(System.Int32)
void TextLayout::SetLineSpace(pls::cs::Int32 lineSpace) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.SetLineSpace(System.Int32)", kairo);
    {
        lineSpace_ = lineSpace;
    }
}

// M:kairo.unity.ui.TextLayout.Dispose
void TextLayout::Dispose() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.Dispose", kairo);
    {
        for (pls::cs::Int32 num = pls::cs::Int32(textBlocks_.length()) - 1; num >= 0; --num) {
            require(textBlocks_.get_Item(num))->Dispose();
            textBlocks_.set_Item(num, pls::cs::Ref<TextLayout_TextBlock>{});
        }
        PLS_API(require(font_)->Dispose());
        font_ = pls::cs::Ref<pls::kairo::Font>{};
        text_ = literal(u"");
    }
}

// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32,System.Int32)
void TextLayout::Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text, pls::cs::Single x,
                      pls::cs::Single y, pls::cs::Int32 color, pls::cs::Int32 anchor) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32,System.Int32)",
        kairo);
    {
        TextLayout::Draw(pls::cs::Ref<TextFormat>{}, g, text, x, y, -1.0f, -1.0f, color,
                         Graphics::GetLineSpace(), anchor);
    }
}

// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.TextFormat,kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32,System.Int32)
void TextLayout::Draw(pls::cs::Ref<TextFormat> lf, pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text,
                      pls::cs::Single x, pls::cs::Single y, pls::cs::Int32 color, pls::cs::Int32 anchor) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.TextFormat,kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32,System.Int32)",
        kairo);
    {
        TextLayout::Draw(lf, g, text, x, y, -1.0f, -1.0f, color, Graphics::GetLineSpace(), anchor);
    }
}

// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32)
void TextLayout::Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text, pls::cs::Single x,
                      pls::cs::Single y, pls::cs::Single w, pls::cs::Single h, pls::cs::Int32 color,
                      pls::cs::Int32 lineSpace, pls::cs::Int32 anchor) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32)",
        kairo);
    {
        TextLayout::Draw(pls::cs::Ref<TextFormat>{}, g, text, x, y, w, h, color, lineSpace, anchor);
    }
}

// M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.TextFormat,kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32)
void TextLayout::Draw(pls::cs::Ref<TextFormat> lf, pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text,
                      pls::cs::Single x, pls::cs::Single y, pls::cs::Single w, pls::cs::Single h,
                      pls::cs::Int32 color, pls::cs::Int32 lineSpace, pls::cs::Int32 anchor) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.TextLayout.Draw(kairo.unity.ui.TextFormat,kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32)",
        kairo);
    {
        pls::cs::Ref<pls::kairo::Font> font = PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
        pls::cs::Single scale = PLS_API(pls::cs::Single(require(g)->GetScale()));
        if (anchor == 0) {
            anchor = 17;
        }
        pls::cs::Int32 num = -1;
        if (!PLS_API(kl_util::Language::Japanese()) && !is_null(lf)) {
            if (require(lf)->GetFont() != -1 && ([&]() -> bool {
                    auto cs_left = require(lf)->GetFont();
                    auto cs_right = PLS_API(require(font)->GetSize());
                    return cs_left != cs_right;
                }())) {
                num = PLS_API(require(font)->GetSize());
                PLS_API(([&]() -> void {
                    pls::cs::Int32 cs_arg0 = require(lf)->GetFont();
                    require(font)->SetSize(cs_arg0, true);
                }()));
            }
            x = pls::cs::to_int32((require(lf)->GetX(x) + 0.01f));
            y = pls::cs::to_int32((require(lf)->GetY(y) + 0.01f));
            anchor = require(lf)->GetAnchor(anchor);
        }
        bool num2 =
            (is_null(lf) || require(lf)->GetFont() == -1) && PLS_API(require(font)->IsNeedLocalizeScale());
        if (num2) {
            num = PLS_API(require(font)->GetSize());
            pls::cs::Int32 height = PLS_API(require(font)->GetHeight());
            PLS_API(([&]() -> void {
                pls::cs::Int32 cs_arg0 = PLS_API(require(font)->GetLocalizeScale());
                require(font)->SetSize(cs_arg0, true);
            }()));
            if ((anchor & 0x60) == 0) {
                y += pls::cs::Single((height - PLS_API(require(font)->GetHeight()))) / 2.0f;
            }
            PLS_API(pls::kairo::Font::LockLocalizeSetting());
        }
        if ((anchor & 0x60) != 0) {
            require(g)->fontScaleOffsetEnable_ = false;
        }
        pls::cs::Ref<TextLayout> textLayout = TextLayout::SearchCache(
            text, w, h, color, lineSpace, anchor, PLS_API(require(font)->GetSize()), scale);
        if (!is_null(textLayout)) {
            require(textLayout)->Draw(g, x, y);
        } else {
            textLayout = TextLayout::create(true, true);
            require(textLayout)->SetGraphicsScale(scale);
            require(textLayout)->SetSize(w, h);
            require(textLayout)->SetColor(color);
            require(textLayout)->SetLineSpace(lineSpace);
            require(textLayout)->SetAnchor(anchor);
            require(textLayout)->multiLine_ = lineSpace > 0;
            {
                pls::cs::Int32 cs_arg0 = PLS_API(require(font)->GetSize());
                require(textLayout)->SetFontSize(cs_arg0);
            }
            require(textLayout)->SetText(text);
            require(textLayout)->Flush();
            TextLayout::AddCache(textLayout);
            require(textLayout)->Draw(g, x, y);
        }
        if ((anchor & 0x60) != 0) {
            require(g)->fontScaleOffsetEnable_ = true;
        }
        if (num2) {
            PLS_API(pls::kairo::Font::UnlockLocalizeSetting());
        }
        if (num != -1) {
            PLS_API(require(font)->SetSize(num, true));
        }
    }
}

// M:kairo.unity.ui.TextLayout.StringWidthF(kairo.unity.ui.TextFormat,kairo.unity.ui.Font,System.String)
pls::cs::Single TextLayout::StringWidthF(pls::cs::Ref<TextFormat> lf, pls::cs::Ref<pls::kairo::Font> font,
                                         pls::cs::String text) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.TextLayout.StringWidthF(kairo.unity.ui.TextFormat,kairo.unity.ui.Font,System.String)",
        kairo);
    {
        pls::cs::Int32 num = -1;
        if (!PLS_API(kl_util::Language::Japanese()) && !is_null(lf) && require(lf)->GetFont() != -1 &&
            ([&]() -> bool {
                auto cs_left = require(lf)->GetFont();
                auto cs_right = PLS_API(require(font)->GetSize());
                return cs_left != cs_right;
            }())) {
            num = PLS_API(require(font)->GetSize());
            PLS_API(([&]() -> void {
                pls::cs::Int32 cs_arg0 = require(lf)->GetFont();
                require(font)->SetSize(cs_arg0, true);
            }()));
        }
        bool flag =
            (is_null(lf) || require(lf)->GetFont() == -1) && PLS_API(require(font)->IsNeedLocalizeScale());
        if (flag) {
            num = PLS_API(require(font)->GetSize());
            PLS_API(require(font)->GetHeight());
            PLS_API(([&]() -> void {
                pls::cs::Int32 cs_arg0 = PLS_API(require(font)->GetLocalizeScale());
                require(font)->SetSize(cs_arg0, true);
            }()));
            PLS_API(pls::kairo::Font::LockLocalizeSetting());
        }
        pls::cs::Int32 anchor = 17;
        pls::cs::Int32 num2 = 1000;
        pls::cs::Int32 height = PLS_API(require(font)->GetHeight());
        pls::cs::Int32 colorOfRGB = PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0));
        pls::cs::Ref<TextLayout> textLayout =
            TextLayout::SearchCache(text, num2, height, PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0)),
                                    0, anchor, PLS_API(require(font)->GetSize()), 100.0f);
        if (is_null(textLayout)) {
            textLayout = TextLayout::create(true, true);
            require(textLayout)->SetGraphicsScale(100.0f);
            require(textLayout)->SetSize(num2, height);
            require(textLayout)->SetColor(colorOfRGB);
            require(textLayout)->SetLineSpace(0);
            require(textLayout)->SetAnchor(anchor);
            require(textLayout)->multiLine_ = false;
            {
                pls::cs::Int32 cs_arg0 = PLS_API(require(font)->GetSize());
                require(textLayout)->SetFontSize(cs_arg0);
            }
            require(textLayout)->SetText(text);
            require(textLayout)->Flush();
            TextLayout::AddCache(textLayout);
        }
        pls::cs::Single textWidthF = require(textLayout)->GetTextWidthF();
        if (flag) {
            PLS_API(pls::kairo::Font::UnlockLocalizeSetting());
        }
        if (num != -1) {
            PLS_API(require(font)->SetSize(num, true));
        }
        return textWidthF;
    }
}

// M:kairo.unity.ui.TextLayout.SearchCache(System.String,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
pls::cs::Ref<TextLayout> TextLayout::SearchCache(pls::cs::String text, pls::cs::Single w, pls::cs::Single h,
                                                 pls::cs::Int32 color, pls::cs::Int32 lineSpace,
                                                 pls::cs::Int32 anchor, pls::cs::Int32 font,
                                                 pls::cs::Single scaleRatio) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.TextLayout.SearchCache(System.String,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Single)",
        kairo);
    {
        pls::cs::Int32 hashCode = PLS_API(value_hash(text));
        for (pls::cs::Int32 i = 0; i < TextLayout::cache_().length(); ++i) {
            pls::cs::Ref<TextLayout> textLayout = TextLayout::cache_().get_Item(i);
            if ((!is_null(textLayout) && require(textLayout)->textHashCode_ == hashCode) && ([&]() -> bool {
                    auto cs_left = kl_lang::StringEx::Length(require(textLayout)->text_);
                    auto cs_right = kl_lang::StringEx::Length(text);
                    return cs_left == cs_right;
                }()) &&
                PLS_API(string_equals(require(textLayout)->text_, text)) &&
                require(textLayout)->width_ == w && require(textLayout)->height_ == h &&
                require(textLayout)->color_ == color && require(textLayout)->lineSpace_ == lineSpace &&
                require(textLayout)->anchor_ == anchor &&
                PLS_API(require(require(textLayout)->font_)->GetSize()) == font &&
                require(textLayout)->scaleRatio_ == scaleRatio) {
                return textLayout;
            }
        }
        return pls::cs::Ref<TextLayout>{};
    }
}

// M:kairo.unity.ui.TextLayout.AddCache(kairo.unity.ui.TextLayout)
void TextLayout::AddCache(pls::cs::Ref<TextLayout> lay) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.AddCache(kairo.unity.ui.TextLayout)",
                     kairo);
    {
        if (!is_null(TextLayout::cache_().get_Item(TextLayout::cachePointer_()))) {
            require(TextLayout::cache_().get_Item(TextLayout::cachePointer_()))->Dispose();
        }
        TextLayout::cache_().set_Item(TextLayout::cachePointer_(), lay);
        TextLayout::cachePointer_() = (TextLayout::cachePointer_() + 1) % TextLayout::cache_().length();
    }
}

// M:kairo.unity.ui.TextLayout.GetTextWidthF
pls::cs::Single TextLayout::GetTextWidthF() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.GetTextWidthF", kairo);
    {
        return textWidth_;
    }
}

// M:kairo.unity.ui.TextLayout.SetGraphicsScale(System.Single)
void TextLayout::SetGraphicsScale(pls::cs::Single scaleRatio) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.SetGraphicsScale(System.Single)", kairo);
    {
        scaleRatio_ = scaleRatio;
    }
}

// M:kairo.unity.ui.TextLayout.GetRenderingFontSize
pls::cs::Int32 TextLayout::GetRenderingFontSize() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.GetRenderingFontSize", kairo);
    {
        if (textBlocks_.length() != 0) {
            return PLS_API(require(require(textBlocks_.get_Item(0))->font_)->GetHeight());
        }
        return -1;
    }
}

// M:kairo.unity.ui.TextLayout.GetPictograph(System.String)
pls::cs::Ref<Pictograph> TextLayout::GetPictograph(pls::cs::String key) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.GetPictograph(System.String)", kairo);
    {
        pls::cs::Ref<Pictograph> value = pls::cs::Ref<Pictograph>{};
        PLS_API(([&]() {
            auto cs_dictionary = TextLayout::pictographList_();
            auto cs_key = key;
            return cs_dictionary.TryGetValue(cs_key, value);
        }()));
        return value;
    }
}

// M:kairo.unity.ui.TextLayout.SetPictographVisible(System.Boolean)
void TextLayout::SetPictographVisible(bool visible) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.SetPictographVisible(System.Boolean)",
                     kairo);
    {
        TextLayout::pictographVisible_() = visible;
    }
}

// M:kairo.unity.ui.TextLayout.IsPictographVisible
bool TextLayout::IsPictographVisible() {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.IsPictographVisible", kairo);
    {
        return TextLayout::pictographVisible_();
    }
}

// M:kairo.unity.ui.TextLayout.RemoveColorTag(System.String)
pls::cs::String TextLayout::RemoveColorTag(pls::cs::String text) {
    TextLayout::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.RemoveColorTag(System.String)", kairo);
    {
        return PLS_API(
            pls::cs::RuntimeRegex::Replace(text, literal(u"<(co=[a-zA-Z0-9,]+|/co)>"), literal(u"")));
    }
}
} // namespace kairo::unity::ui
}
