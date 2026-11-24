// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "form.FormManager.hpp"
#include "form.MyFormBase.hpp"
#include "game.UserData.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.system.lineup.ui.LineupData.hpp"
#include "kairo.unity.system.lineup.ui.LineupManager.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "system.KairoText.hpp"
#include "system.form.LineupForm.hpp"
#include "system.lineup.MyLineup.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace system::form {

void LineupForm::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MyFormBase::trace_edges(visitor);
    pls::cs::trace_value(linups_, visitor);
    pls::cs::trace_value(lay_, visitor);
    pls::cs::trace_value(clip_, visitor);
}

static IntArray2 LineupForm_configData__storage{};

static pls::cs::Ref<kairo::unity::ui::ResourceManager> LineupForm_resLineupLayout__storage{};

static PLS_NOINLINE void cs_init_d01bf6d528df5d3e_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(LineupForm_configData__storage, visitor);
        pls::cs::trace_value(LineupForm_resLineupLayout__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("system.form.LineupForm", flag, []() {
        LineupForm_configData__storage = pls::cs::evaluate_type_initializer_field(
            "F:system.form.LineupForm.configData_", [&]() { return IntArray2::from({IntArray::make(2)}); });
    });
}

void LineupForm::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_d01bf6d528df5d3e_slow(flag);
}

IntArray2& LineupForm::configData_() {
    LineupForm::ensure_initialized();
    return LineupForm_configData__storage;
}

pls::cs::Ref<kairo::unity::ui::ResourceManager>& LineupForm::resLineupLayout_() {
    LineupForm::ensure_initialized();
    return LineupForm_resLineupLayout__storage;
}

void LineupForm::create_init(pls::cs::Ref<LineupForm> self) {
    LineupForm::ensure_initialized();
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 903);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.#ctor", game);
    {
    }
}

void LineupForm::create_init(pls::cs::Ref<LineupForm> self, pls::cs::Int32 type) {
    LineupForm::ensure_initialized();
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 903);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.#ctor(System.Int32)", game);
    {
        self->type_ = type;
        self->select_ = 0;
    }
}

// M:system.form.LineupForm.#ctor
pls::cs::Ref<LineupForm> LineupForm::create() {
    LineupForm::ensure_initialized();
    auto self = pls::cs::make_ref<LineupForm>();
    LineupForm::create_init(self);
    return self;
}

// M:system.form.LineupForm.#ctor(System.Int32)
pls::cs::Ref<LineupForm> LineupForm::create(pls::cs::Int32 type) {
    LineupForm::ensure_initialized();
    auto self = pls::cs::make_ref<LineupForm>();
    LineupForm::create_init(self, type);
    return self;
}

// M:system.form.LineupForm.ToString
pls::cs::String LineupForm::ToString() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.ToString", game);
    {
        return pls::cs::String::concat(literal(u"LineupForm:"), integer_string(type_));
    }
}

// M:system.form.LineupForm.Init
bool LineupForm::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.Init", game);
    {
        MyFormBase::Init();
        pls::cs::Ref<lineup::MyLineup> instance = lineup::MyLineup::GetInstance();
        LineupForm::resLineupLayout_() =
            require(kairo::unity::ui::ResourceManager::create(
                        pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                        pls::cs::String{}, pls::cs::String{}, pls::cs::String{}))
                ->SetRecordNameBits(0);
        {
            auto cs_receiver = LineupForm::resLineupLayout_();
            ByteArray cs_arg0 = PLS_API(pls::kairo::Storage::Read(3, false, literal(u"lineup_layout.dat")));
            require(cs_receiver)->Load(cs_arg0, 3);
        }
        linups_ = require(instance)->GetShowableLineups();
        select_ = linups_.length();
        require(apdat_)->SaveSystem();
        SetSoftlabel();
        return true;
    }
}

// M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics)
void LineupForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics)", game);
    {
        MyFormBase::Draw(g);
        PLS_API(pls::kairo::Font::PushLocalizeSetting(false));
        IntArray sprite = require(require(LineupForm::resLineupLayout_())->seb.get_Item(0))->GetSprite(0, 0);
        pls::cs::Int32 num = (require(view_)->GetGameWidth() - 240) / 2;
        pls::cs::Int32 num2 = (([&]() -> pls::cs::Int32 {
                                  auto cs_left = require(view_)->GetGameHeight();
                                  auto cs_right = (sprite[5] + 30);
                                  return cs_left - cs_right;
                              }())) /
                              2;
        PLS_API(require(g)->SetColor(255, 255, 255));
        PLS_API(([&]() -> void {
            pls::cs::String cs_arg0 = KairoText::LT(literal(u"オススメアプリ情報"));
            require(g)->DrawString(cs_arg0, 120.0f, num2 - 31, 2);
        }()));
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                require(LineupForm::resLineupLayout_())->img.get_Item(sprite[1]);
            pls::cs::Single cs_arg2 = num2;
            pls::cs::Single cs_arg3 = require(view_)->GetGameWidth();
            pls::cs::Single cs_arg4 = sprite[5];
            pls::cs::Int32 cs_arg5 = sprite[2];
            pls::cs::Int32 cs_arg6 = sprite[3];
            pls::cs::Int32 cs_arg7 = sprite[4];
            pls::cs::Int32 cs_arg8 = sprite[5];
            require(g)->DrawScaledImage(cs_arg0, 0.0f, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7,
                                        cs_arg8);
        }()));
        pls::cs::Ref<kairo::unity::system::lineup::ui::LineupData> lineupData = linups_.get_Item(0);
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(lineupData)->GetImage();
            require(g)->DrawImage(cs_arg0, num + 5, num2 + 9);
        }()));
        pls::cs::Int32 num3 = num + 40 + 33;
        pls::cs::Int32 num4 = num2 + 12;
        if (select_ < linups_.length() && push_) {
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 187, 76))));
            PLS_API(require(g)->FillRect(num3, num4 + 22 - 26, 160.0f, 61.0f));
        }
        if (is_null(lay_)) {
            pls::cs::String explain = require(lineupData)->GetExplain();
            pls::cs::Int32 num5 = 58;
            lay_ = kairo::unity::ui::TextLayout::create();
            require(lay_)->SetSize(160.0f, num5);
            require(lay_)->SetAnchor(34);
            require(lay_)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 254)));
            require(lay_)->SetLineSpace(8);
            require(lay_)->SetText(explain);
            require(lay_)->Flush();
            pls::cs::Int32 height = require(lay_)->GetHeight();
            if (height <= num5 / 2 + 6 + 1) {
                clip_ = IntArray::from({19, 38, 58});
            } else if (height <= num5 / 2 + 16 + 1) {
                clip_ = IntArray::from({29, 58});
            } else {
                clip_ = IntArray::from({19, 38, 58});
            }
        }
        pls::cs::Int32 num6 = frame_ - 10;
        if (num6 >= 0 && !is_null(lay_)) {
            pls::cs::Int32 num7 = num6 / 10;
            if (!push_ && num7 >= clip_.length()) {
                push_ = true;
            }
            if (num7 >= clip_.length()) {
                num7 = pls::cs::Int32(clip_.length()) - 1;
            }
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg1 = num4 - 2;
                pls::cs::Single cs_arg2 = require(view_)->GetGameWidth();
                pls::cs::Single cs_arg3 = clip_[num7];
                require(g)->ClipRect(0.0f, cs_arg1, cs_arg2, cs_arg3, true);
            }()));
            require(lay_)->Draw(g, num3, num4 - 2);
            PLS_API(require(g)->PopClip());
        }
        if (push_) {
            pls::game::surface::GameView::AddTouch(g, 2, 0, num2, require(view_)->GetGameWidth(), 77, 131072);
        }
        pls::cs::Int32 num8 = num2 + 109;
        if (push_) {
            PLS_API(require(g)->SetColor(79, 79, 79));
            PLS_API(require(g)->FillRect(num + 49, num8, 148.0f, 37.0f));
            PLS_API(require(g)->SetColor(217, 237, 255));
            PLS_API(require(g)->FillRect(num + 49 + 1, num8 + 1, 146.0f, 1.0f));
            PLS_API(require(g)->SetColor(108, 167, 255));
            PLS_API(require(g)->FillRect(num + 49 + 1, num8 + 2, 146.0f, 34.0f));
            PLS_API(require(g)->SetColor(255, 255, 254));
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0_306 = g;
            pls::cs::String cs_arg1_306 = KairoText::LT(literal(u"タイトル画面へ"));
            bool cs_arg5_306 = select_ == linups_.length();
            IntArray array = DrawCommand(cs_arg0_306, cs_arg1_306, 120, num8 + 14, 2, cs_arg5_306, 5, false);
            pls::cs::Ref<kairo::unity::surface::TouchOption> opt =
                require(kairo::unity::surface::TouchOption::CreateInt(256))->Margin(50, 50, 10, 20);
            {
                pls::cs::Int32 cs_arg2 = array[0];
                pls::cs::Int32 cs_arg3 = array[1];
                pls::cs::Int32 cs_arg4 = array[2];
                pls::cs::Int32 cs_arg5 = array[3];
                pls::cs::Int32 cs_arg6 = (pls::cs::Int32(0x20000) | linups_.length());
                pls::game::surface::GameView::AddTouch(g, 2, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6,
                                                       opt);
            }
        }
        PLS_API(pls::kairo::Font::PopLocalizeSetting());
    }
}

// M:system.form.LineupForm.Finish
bool LineupForm::Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.Finish", game);
    {
        MyFormBase::Finish();
        if (!is_null(LineupForm::resLineupLayout_())) {
            require(LineupForm::resLineupLayout_())->Dispose();
        }
        LineupForm::resLineupLayout_() = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
        pls::cs::Ref<lineup::MyLineup> instance = lineup::MyLineup::GetInstance();
        require(instance)->UnloadImage();
        return true;
    }
}

// M:system.form.LineupForm.Resume
bool LineupForm::Resume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.Resume", game);
    {
        MyFormBase::Resume();
        return true;
    }
}

// M:system.form.LineupForm.Update
bool LineupForm::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.Update", game);
    {
        MyFormBase::Update();
        frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (push_) {
            pls::cs::Int32 num = pls::cs::Int32(linups_.length()) + 1;
            if (PLS_API(require(canvas_)->CheckKeyPulse(131072))) {
                select_ = (select_ - 1 + num) % num;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(524288))) {
                select_ = (select_ + 1 + num) % num;
            }
            if ((PLS_API(require(canvas_)->CheckKeyPulse(1048576)))) {
                if (select_ < linups_.length()) {
                    kairo::unity::ui::Canvas::OpenBrowser(require(linups_.get_Item(select_))->GetURL());
                } else {
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            }
        }
        PLS_API(require(formMan_)->DrawAllForms());
        SetSoftlabel();
        return true;
    }
}

// M:system.form.LineupForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
IntArray LineupForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 x,
                                 pls::cs::Int32 y, pls::cs::Int32 anchor, bool active, pls::cs::Int32 margin,
                                 bool cursor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.LineupForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)",
        game);
    {
        return require(apdat_)->DrawCommand(g, str, x, y, anchor, active, margin, cursor, this, loopCounter_);
    }
}

// M:system.form.LineupForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t LineupForm::GetTouchValue(std::int32_t type_raw, std::int32_t index_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 index = index_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.GetTouchValue(System.Int32,System.Int32)",
                     game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        pls::cs::Int32 num = type;
        if (num != 131072) {

        } else {
            return select_;
        }
        return MyFormBase::GetTouchValue(type, index);
    }
}

// M:system.form.LineupForm.SetTouchValue(System.Int32,System.Int32)
void LineupForm::SetTouchValue(std::int32_t type_raw, std::int32_t value_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 value = value_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.SetTouchValue(System.Int32,System.Int32)",
                     game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        switch (type) {
        case 131072: {
            select_ = value;
            break;
        }
        default: {
            MyFormBase::SetTouchValue(type, value);
            break;
        }
        }
    }
}

// M:system.form.LineupForm.CheckMainWindow
bool LineupForm::CheckMainWindow() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.CheckMainWindow", game);
    {
        return false;
    }
}

// M:system.form.LineupForm.SetSoftlabel
void LineupForm::SetSoftlabel() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.SetSoftlabel", game);
    {
        main::AppData::ensure_initialized();

        pls::cs::Int32 num = LineupForm::configData_()[type_][0];
        pls::cs::Int32 num2 = LineupForm::configData_()[type_][1];
        PLS_API(([&]() -> void {
            pls::cs::String cs_arg0 = main::AppData::softLabels_()[num];
            pls::cs::String cs_arg1 = main::AppData::softLabels_()[num2];
            this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
        }()));
    }
}

// M:system.form.LineupForm.GetHashCode
std::int32_t LineupForm::GetHashCode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.LineupForm.GetHashCode", game);
    {
        return PLS_API(([&]() {
            auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));
            return require(cs_receiver)->pls::cs::Object::GetHashCode();
        }()));
    }
}
} // namespace system::form
}
