// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.StringEx.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "kairo.unity.panel.Button.hpp"
#include "kairo.unity.panel.Component.hpp"
#include "kairo.unity.panel.FepPanel.hpp"
#include "kairo.unity.panel.Label.hpp"
#include "kairo.unity.panel.TextBox.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace kairo::unity::panel {

void FepPanel::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(label_, visitor);
    pls::cs::trace_value(text_, visitor);
    pls::cs::trace_value(btn1_, visitor);
    pls::cs::trace_value(btn2_, visitor);
}

static pls::cs::Ref<FepPanel> FepPanel_current__storage{};

static PLS_NOINLINE void cs_init_d37bccc1c3814fc6_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(FepPanel_current__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.panel.FepPanel", flag, []() {

    });
}

void FepPanel::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_d37bccc1c3814fc6_slow(flag);
}

pls::cs::Ref<FepPanel>& FepPanel::current_() {
    FepPanel::ensure_initialized();
    return FepPanel_current__storage;
}

// M:kairo.unity.panel.FepPanel.get_Current
pls::cs::Ref<FepPanel> FepPanel::get_Current() {
    FepPanel::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.get_Current", kairo);
    {
        return FepPanel::current_();
    }
}

// M:kairo.unity.panel.FepPanel.#ctor
void FepPanel::create_init(pls::cs::Ref<FepPanel> self) {
    FepPanel::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.#ctor", kairo);
    {
    }
}

// M:kairo.unity.panel.FepPanel.SetLayoutManager(System.Object)
void FepPanel::SetLayoutManager(pls::cs::Ref<pls::cs::Object> obj) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.SetLayoutManager(System.Object)", kairo);
    {
    }
}

// M:kairo.unity.panel.FepPanel.SetComponentListener(System.Object)
void FepPanel::SetComponentListener(pls::cs::Ref<pls::cs::Object> obj) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.SetComponentListener(System.Object)",
                     kairo);
    {
    }
}

// M:kairo.unity.panel.FepPanel.SetSoftLabel(System.Int32,System.String)
void FepPanel::SetSoftLabel(pls::cs::Int32 key, pls::cs::String text) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.SetSoftLabel(System.Int32,System.String)",
                     kairo);
    {
    }
}

// M:kairo.unity.panel.FepPanel.GetWidth
pls::cs::Int32 FepPanel::GetWidth() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.GetWidth", kairo);
    {
        return 240;
    }
}

// M:kairo.unity.panel.FepPanel.GetHeight
pls::cs::Int32 FepPanel::GetHeight() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.GetHeight", kairo);
    {
        return 240;
    }
}

// M:kairo.unity.panel.FepPanel.Add(kairo.unity.panel.Component)
void FepPanel::Add(pls::cs::Ref<Component> component) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.Add(kairo.unity.panel.Component)", kairo);
    {
        if (is_instance<pls::cs::Ref<Label>>(pls::cs::box(component))) {
            label_ = pls::cs::unbox<pls::cs::Ref<Label>>(pls::cs::box(component));
        }
        if (is_instance<pls::cs::Ref<TextBox>>(pls::cs::box(component))) {
            text_ = pls::cs::unbox<pls::cs::Ref<TextBox>>(pls::cs::box(component));
        }
        if (is_instance<pls::cs::Ref<Button>>(pls::cs::box(component))) {
            if (is_null(btn1_)) {
                btn1_ = pls::cs::unbox<pls::cs::Ref<Button>>(pls::cs::box(component));
            } else {
                btn2_ = pls::cs::unbox<pls::cs::Ref<Button>>(pls::cs::box(component));
            }
        }
    }
}

// M:kairo.unity.panel.FepPanel.Show
void FepPanel::Show() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.Show", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        if (kl_cfg::Config::PRINT()) {
            PLS_API(kl_util::Log::Info(
                literal(
                    u"入力パネルはiPhone対応に向けて処理をブロックさせず、kfw.paenl.MainPanel.Show() の第二引数にイベントハンドラを指定する方式に書き換えてください。"),
                pls::cs::Ref<pls::cs::ExceptionObject>{}));
        }
        StringArray array = PLS_API(pls::kairo::show_text_panel(
            require(label_)->text_, require(text_)->text_, require(text_)->mode_, require(btn1_)->label_,
            require(btn2_)->label_, require(text_)->maxLength_));
        {
            auto cs_target = text_;
            auto cs_value = array[1];
            require(cs_target)->text_ = cs_value;
        }
        if (!is_null(array[0])) {
            this->ComponentAction(btn1_, 1, 0);
        } else {
            this->ComponentAction(btn2_, 1, 0);
        }
    }
}

// M:kairo.unity.panel.FepPanel.Start
void FepPanel::Start() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.Start", kairo);
    {
        FepPanel::current_() = this;
        delay_ = 2;
        PLS_API(pls::kairo::start_text_panel(require(label_)->text_, require(text_)->text_,
                                             require(text_)->mode_, require(btn1_)->label_,
                                             require(btn2_)->label_, require(text_)->maxLength_));
    }
}

// M:kairo.unity.panel.FepPanel.Update
bool FepPanel::Update() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.Update", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        if (kl_cfg::Config::UNITY_EDITOR() && (--delay_ > 0)) {
            return false;
        }
        if (!PLS_API(pls::kairo::text_panel_finished())) {
            return false;
        }
        FepPanel::current_() = pls::cs::Ref<FepPanel>{};
        StringArray fepPanelResult = PLS_API(pls::kairo::text_panel_result());
        {
            auto cs_target = text_;
            auto cs_value = fepPanelResult[1];
            require(cs_target)->text_ = cs_value;
        }
        if (!is_null(fepPanelResult[0])) {
            this->ComponentAction(btn1_, 1, 0);
        } else {
            this->ComponentAction(btn2_, 1, 0);
        }
        return true;
    }
}

// M:kairo.unity.panel.FepPanel.GetStringLength(System.String)
pls::cs::Int32 FepPanel::GetStringLength(pls::cs::String s) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.GetStringLength(System.String)", kairo);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < kl_lang::StringEx::Length(s); ++i) {
            if (IsSimpleChara(kl_lang::StringEx::CharAt(s, i))) {
                num = (num + 1);
            } else {
                num = (num + 2);
            }
        }
        return num;
    }
}

// M:kairo.unity.panel.FepPanel.IsSimpleChara(System.Char)
bool FepPanel::IsSimpleChara(char16_t c) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.FepPanel.IsSimpleChara(System.Char)", kairo);
    {
        if ((pls::cs::cast_integral<pls::cs::Int32>(c) >=
             pls::cs::cast_integral<pls::cs::Int32>(char16_t(127))) ||
            (pls::cs::cast_integral<pls::cs::Int32>(c) < pls::cs::cast_integral<pls::cs::Int32>(u' '))) {
            if (pls::cs::cast_integral<pls::cs::Int32>(c) >
                pls::cs::cast_integral<pls::cs::Int32>(char16_t(65376))) {
                return (pls::cs::cast_integral<pls::cs::Int32>(c) <=
                        pls::cs::cast_integral<pls::cs::Int32>(char16_t(65439)));
            }
            return false;
        }
        return true;
    }
}
} // namespace kairo::unity::panel
}
