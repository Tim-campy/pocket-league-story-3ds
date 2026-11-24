// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.panel.Button.hpp"
#include "kairo.unity.panel.Component.hpp"
#include "kairo.unity.panel.FepPanel.Display.hpp"
#include "kairo.unity.panel.FepPanel.hpp"
#include "kairo.unity.panel.Label.hpp"
#include "kairo.unity.panel.TextBox.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kfw.panel.MainPanel.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace kfw::panel {

void MainPanel::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    FepPanel::trace_edges(visitor);
    pls::cs::trace_value(lbl1, visitor);
    pls::cs::trace_value(txtBox, visitor);
    pls::cs::trace_value(btn, visitor);
    pls::cs::trace_value(btn2, visitor);
    pls::cs::trace_value(bkCanvas_, visitor);
    pls::cs::trace_value(prohibition_, visitor);
    pls::cs::trace_value(itemName_, visitor);
    pls::cs::trace_value(result_, visitor);
    pls::cs::trace_value(defaultText_, visitor);
    pls::cs::trace_value(originalText_, visitor);
    pls::cs::trace_value(bkSoftLabels_, visitor);
    pls::cs::trace_value(onFinishMethod_, visitor);
}

static PLS_NOINLINE void cs_init_8bf13b560e1e05e9_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kfw.panel.MainPanel", flag, []() {

    });
}

void MainPanel::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_8bf13b560e1e05e9_slow(flag);
}

void MainPanel::create_init(pls::cs::Ref<MainPanel> self) {
    MainPanel::ensure_initialized();
    self->prohibition_ = pls::cs::Array<char16_t>::from({u'/', u'|', u'<', u'>'});
    self->itemName_ = literal(u"名前");
    self->endMark_ = true;
    self->inputMode_ = 2;
    self->bkSoftLabels_ = StringArray::make(4);
    FepPanel::create_init(pls::cs::static_pointer_cast<FepPanel>(self));
    PLS_METHOD_SCOPE("KairoLibrary", "M:kfw.panel.MainPanel.#ctor", kairo);
    {
    }
}

void MainPanel::create_init(pls::cs::Ref<MainPanel> self, pls::cs::String label, pls::cs::String defaultText,
                            pls::cs::Int32 maxLength, pls::cs::Int32 inputMode, pls::cs::String itemName) {
    MainPanel::ensure_initialized();
    self->prohibition_ = pls::cs::Array<char16_t>::from({u'/', u'|', u'<', u'>'});
    self->itemName_ = literal(u"名前");
    self->endMark_ = true;
    self->inputMode_ = 2;
    self->bkSoftLabels_ = StringArray::make(4);
    FepPanel::create_init(pls::cs::static_pointer_cast<FepPanel>(self));
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kfw.panel.MainPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)",
        kairo);
    {
        self->Init(label, defaultText, maxLength, inputMode, itemName);
    }
}

// M:kfw.panel.MainPanel.#ctor
pls::cs::Ref<MainPanel> MainPanel::create() {
    MainPanel::ensure_initialized();
    auto self = pls::cs::make_ref<MainPanel>();
    MainPanel::create_init(self);
    return self;
}

// M:kfw.panel.MainPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)
pls::cs::Ref<MainPanel> MainPanel::create(pls::cs::String label, pls::cs::String defaultText,
                                          pls::cs::Int32 maxLength, pls::cs::Int32 inputMode,
                                          pls::cs::String itemName) {
    MainPanel::ensure_initialized();
    auto self = pls::cs::make_ref<MainPanel>();
    MainPanel::create_init(self, label, defaultText, maxLength, inputMode, itemName);
    return self;
}

// M:kfw.panel.MainPanel.Init(System.String,System.String,System.Int32,System.Int32,System.String)
void MainPanel::Init(pls::cs::String label, pls::cs::String defaultText, pls::cs::Int32 maxLength,
                     pls::cs::Int32 inputMode, pls::cs::String itemName) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kfw.panel.MainPanel.Init(System.String,System.String,System.Int32,System.Int32,System.String)",
        kairo);
    {
        originalText_ = defaultText;
        maxLength_ = maxLength;
        inputMode_ = inputMode;
        if (!is_null(itemName)) {
            itemName_ = itemName;
        }
        if (inputMode != 2) {
            endMark_ = false;
            trim_ = true;
        }
        pls::cs::String text = literal(u"");
        for (pls::cs::Int32 i = 0; i < maxLength_; ++i) {
            text = pls::cs::String::concat(text, literal(u"w"));
        }
        maxWidth_ = GetStringWidth(text);
        if (!PLS_API(kl_util::Language::Japanese())) {
            pls::cs::String text2 = literal(u"");
            for (pls::cs::Int32 j = 0; j < defaultText.length(); ++j) {
                text = pls::cs::String::concat(text2, char_string(defaultText.at(j)));
                if ([&]() -> bool {
                        auto cs_left = GetStringWidth(text);
                        auto cs_right = maxWidth_;
                        return cs_left > cs_right;
                    }()) {
                    break;
                }
                text2 = text;
            }
            defaultText = text2;
        }
        lbl1 = kairo::unity::panel::Label::create(label);
        txtBox = kairo::unity::panel::TextBox::create(defaultText, 20, 1, 0);
        require(txtBox)->SetInputMode(inputMode);
        require(txtBox)->SetMaxLength(maxLength);
        btn = kairo::unity::panel::Button::create(literal(u"決定"));
        btn2 = kairo::unity::panel::Button::create(literal(u"戻る"));
        defaultText_ = require(txtBox)->GetText();
        SetLayoutManager(pls::cs::Ref<pls::cs::Object>{});
        {
            auto cs_receiver = lbl1;
            auto cs_left_243 = GetWidth() / 2;
            auto cs_right_243 = require(lbl1)->GetWidth() / 2;
            pls::cs::Int32 cs_arg0 = cs_left_243 - cs_right_243;
            pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 {
                                         auto cs_left = GetHeight() / 2;
                                         auto cs_right = require(lbl1)->GetHeight();
                                         return cs_left - cs_right;
                                     }()) -
                                     16;
            require(cs_receiver)->SetLocation(cs_arg0, cs_arg1);
        }
        {
            auto cs_receiver = txtBox;
            auto cs_left_244 = GetWidth() / 2;
            auto cs_right_244 = require(txtBox)->GetWidth() / 2;
            pls::cs::Int32 cs_arg0 = cs_left_244 - cs_right_244;
            pls::cs::Int32 cs_arg1 = GetHeight() / 2 - 16 + 4;
            require(cs_receiver)->SetLocation(cs_arg0, cs_arg1);
        }
        {
            auto cs_receiver = btn;
            pls::cs::Int32 cs_arg0 = ([&]() -> pls::cs::Int32 {
                                         auto cs_left = GetWidth() / 2;
                                         auto cs_right = require(btn)->GetWidth();
                                         return cs_left - cs_right;
                                     }()) -
                                     4;
            pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 {
                                         auto cs_left = GetHeight() / 2;
                                         auto cs_right = require(txtBox)->GetHeight();
                                         return cs_left + cs_right;
                                     }()) -
                                     16 + 8;
            require(cs_receiver)->SetLocation(cs_arg0, cs_arg1);
        }
        {
            auto cs_receiver = btn2;
            pls::cs::Int32 cs_arg0 = GetWidth() / 2 + 4;
            pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 {
                                         auto cs_left = GetHeight() / 2;
                                         auto cs_right = require(txtBox)->GetHeight();
                                         return cs_left + cs_right;
                                     }()) -
                                     16 + 8;
            require(cs_receiver)->SetLocation(cs_arg0, cs_arg1);
        }
        Add(lbl1);
        Add(txtBox);
        Add(btn);
        Add(btn2);
        SetComponentListener(pls::cs::box(this));
    }
}

// M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas)
pls::cs::String MainPanel::Show(pls::cs::Ref<pls::kairo::Canvas> canvas) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas)", kairo);
    {
        bkCanvas_ = canvas;
        kairo::unity::panel::FepPanel_Display::SetCurrent(static_cast<pls::cs::Ref<FepPanel>>(this));
        SetSoftLabel(0, literal(u""));
        SetSoftLabel(1, literal(u""));
        end_ = false;
        while (!end_) {
            FepPanel::Show();
            PLS_API(pls::kairo::source_app_sleep(1));
        }
        return result_;
    }
}

// M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)
void MainPanel::Show(pls::cs::Ref<pls::kairo::Canvas> canvas,
                     pls::cs::Delegate<void(pls::cs::String)> onFinishMethod) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)",
                     kairo);
    {
        bkCanvas_ = canvas;
        {
            auto cs_target = bkSoftLabels_;
            auto cs_index = 0;
            auto cs_value = PLS_API(require(canvas)->GetSoftLabel(0));
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = bkSoftLabels_;
            auto cs_index = 1;
            auto cs_value = PLS_API(require(canvas)->GetSoftLabel(1));
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = bkSoftLabels_;
            auto cs_index = 2;
            auto cs_value = PLS_API(require(canvas)->GetSoftLabel(2));
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = bkSoftLabels_;
            auto cs_index = 3;
            auto cs_value = PLS_API(require(canvas)->GetSoftLabel(3));
            cs_target.set_Item(cs_index, cs_value);
        }
        PLS_API(
            require(canvas)->SetSoftLabel(literal(u""), literal(u""), pls::cs::String{}, pls::cs::String{}));
        PLS_API(require(canvas)->UpdateSoftLabel());
        kairo::unity::panel::FepPanel_Display::SetCurrent(static_cast<pls::cs::Ref<FepPanel>>(this));
        end_ = false;
        onFinishMethod_ = onFinishMethod;
        Start();
    }
}

// M:kfw.panel.MainPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)
void MainPanel::ComponentAction(pls::cs::Ref<kairo::unity::panel::Component> c, pls::cs::Int32 type,
                                pls::cs::Int32 param) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kfw.panel.MainPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)",
        kairo);
    {
        pls::cs::Int32 num = 0;
        if (type == 1) {
            if (pls::cs::box(c) == pls::cs::box(btn)) {
                pls::cs::String text =
                    PLS_API(pls::cs::string_replace(require(txtBox)->GetText(), char16_t(10), u' '));
                if (trim_) {
                    text = PLS_API(pls::cs::string_trim(text));
                }
                num = 0;
                if (PLS_API(kl_util::Language::Japanese())) {
                    if ([&]() -> bool {
                            auto cs_left = GetStringLength(text);
                            auto cs_right = maxLength_;
                            return cs_left > cs_right;
                        }()) {
                        num = 1;
                    }
                } else if ([&]() -> bool {
                               auto cs_left = GetStringWidth(text);
                               auto cs_right = maxWidth_;
                               return cs_left > cs_right;
                           }()) {
                    num = 1;
                }
                for (pls::cs::Int32 i = 0; i < prohibition_.length(); ++i) {
                    if (PLS_API(index_char1(text, prohibition_[i])) != -1) {
                        num = 2;
                        break;
                    }
                }
                if (kl_lang::StringEx::Length(PLS_API(pls::cs::string_trim(PLS_API(([&]() {
                        auto cs_text = text;
                        auto cs_separators = pls::cs::Array<char16_t>::make(1);
                        cs_separators.at(0) = char16_t(8);
                        return pls::cs::string_trim(cs_text, cs_separators);
                    }()))))) == 0) {
                    num = 3;
                }
                if ((num == 0)) {
                    result_ = text;
                    if (PLS_API(string_equals(result_, defaultText_))) {
                        result_ = originalText_;
                    } else {
                        result_ = pls::cs::String::concat(result_, literal(u"\010"));
                    }
                    while (!endMark_ && PLS_API(pls::cs::culture_ends_with(result_, literal(u"\010")))) {
                        result_ = ([&]() -> pls::cs::String {
                            pls::cs::String cs_arg0 = result_;
                            pls::cs::Int32 cs_arg2 = kl_lang::StringEx::Length(result_) - 1;
                            return kl_lang::StringEx::SubstringJ(cs_arg0, 0, cs_arg2);
                        }());
                    }
                    kairo::unity::panel::FepPanel_Display::SetCurrentCanvas(bkCanvas_);
                    end_ = true;
                } else if ((num == 1)) {
                    {
                        pls::cs::Int32 num2 = maxLength_;
                        if (PLS_API(kl_util::Language::Japanese())) {
                            num2 /= 2;
                        }
                        pls::cs::String text3 = literal(u"全角<0>文字以内にして下さい");
                        if (inputMode_ != 2) {
                            text3 = literal(u"<0>文字以内にして下さい");
                            num2 = maxLength_;
                        }
                        if (!PLS_API(kl_util::Language::Japanese())) {
                            text3 = literal(u"内容を短くして下さい");
                        }
                        pls::cs::Ref<kairo::unity::ui::Dialog> dialog3 =
                            kairo::unity::ui::Dialog::create(1, literal(u"ﾒｯｾｰｼﾞ"));
                        {
                            pls::cs::String cs_arg0 = PLS_API(([&]() -> pls::cs::String {
                                pls::cs::String cs_arg0 =
                                    PLS_API(kl_util::Language::TranslateText(text3, true));
                                pls::cs::String cs_arg1 = PLS_API(kl_lang::JString::ValueOfInt(num2));
                                return kl_util::StringUtil::Replace(cs_arg0, cs_arg1);
                            }()));
                            require(dialog3)->SetText(cs_arg0);
                        }
                        require(dialog3)->Show();
                    }
                } else if ((num == 2)) {
                    {
                        pls::cs::Ref<kairo::unity::ui::Dialog> dialog2 =
                            kairo::unity::ui::Dialog::create(1, literal(u"ﾒｯｾｰｼﾞ"));
                        pls::cs::String text2 = literal(u"");
                        for (pls::cs::Int32 j = 0; j < prohibition_.length(); ++j) {
                            if (kl_lang::StringEx::Length(text2) > 0) {
                                text2 = pls::cs::String::concat(text2, literal(u" "));
                            }
                            text2 = pls::cs::String::concat(text2, char_string(prohibition_[j]));
                        }
                        {
                            pls::cs::String cs_arg0 = PLS_API(kl_util::StringUtil::Replace(
                                PLS_API(kl_util::Language::TranslateText(
                                    literal(u"システムの都合上 <0> は使えません"), true)),
                                text2));
                            require(dialog2)->SetText(cs_arg0);
                        }
                        require(dialog2)->Show();
                    }
                } else if ((num == 3)) {
                    {
                        pls::cs::Ref<kairo::unity::ui::Dialog> dialog =
                            kairo::unity::ui::Dialog::create(1, literal(u"ﾒｯｾｰｼﾞ"));
                        {
                            pls::cs::String cs_arg0 = PLS_API(([&]() -> pls::cs::String {
                                pls::cs::String cs_arg0 = PLS_API(
                                    kl_util::Language::TranslateText(literal(u"<0>を入力して下さい"), true));
                                pls::cs::String cs_arg1 = itemName_;
                                return kl_util::StringUtil::Replace(cs_arg0, cs_arg1);
                            }()));
                            require(dialog)->SetText(cs_arg0);
                        }
                        require(dialog)->Show();
                    }
                }
            } else {
                result_ = pls::cs::String{};
                kairo::unity::panel::FepPanel_Display::SetCurrentCanvas(bkCanvas_);
                end_ = true;
            }
        }
        if (end_) {
            if ([&]() {
                    auto cs_left = onFinishMethod_;
                    auto cs_right = pls::cs::Delegate<void(pls::cs::String)>{};
                    return cs_left != cs_right;
                }()) {
                {
                    auto cs_delegate = onFinishMethod_;
                    auto cs_arg0 = result_;
                    cs_delegate(cs_arg0);
                }
            }
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 = bkSoftLabels_[0];
                pls::cs::String cs_arg1 = bkSoftLabels_[1];
                pls::cs::String cs_arg2 = bkSoftLabels_[2];
                pls::cs::String cs_arg3 = bkSoftLabels_[3];
                require(bkCanvas_)->SetSoftLabel(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }()));
        } else {
            Start();
        }
    }
}

// M:kfw.panel.MainPanel.SetItemName(System.String)
void MainPanel::SetItemName(pls::cs::String name) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kfw.panel.MainPanel.SetItemName(System.String)", kairo);
    {
        itemName_ = name;
    }
}

// M:kfw.panel.MainPanel.GetStringWidth(System.String)
pls::cs::Int32 MainPanel::GetStringWidth(pls::cs::String str) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kfw.panel.MainPanel.GetStringWidth(System.String)", kairo);
    {
        pls::cs::Ref<pls::kairo::Font> font = pls::cs::make_ref<pls::kairo::Font>();
        pls::cs::Int32 result = PLS_API(require(font)->StringWidth(str));
        PLS_API(require(font)->Dispose());
        return result;
    }
}
} // namespace kfw::panel
}
