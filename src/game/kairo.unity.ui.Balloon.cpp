// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "kairo.unity.graphics.Rectangle.hpp"
#include "kairo.unity.graphics.RectangleF.hpp"
#include "kairo.unity.math.KairoMath.hpp"
#include "kairo.unity.native.KairoPlugin.hpp"
#include "kairo.unity.ui.Balloon.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.Image.BalloonRenderTask.hpp"
#include "kairo.unity.ui.Matrix.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "kairo.unity.util.Language.hpp"
using ShortArray = pls::cs::Array<std::int16_t>;
using FloatArray = pls::cs::Array<pls::cs::Single>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::ui {

void Balloon::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(m_Seb_k__BackingField, visitor);
    pls::cs::trace_value(text_, visitor);
    pls::cs::trace_value(leftSpaceSeb_, visitor);
    pls::cs::trace_value(rightSpaceSeb_, visitor);
    pls::cs::trace_value(render_, visitor);
    pls::cs::trace_value(maskList_, visitor);
    pls::cs::trace_value(clip_, visitor);
    pls::cs::trace_value(leftSpaceRect_, visitor);
    pls::cs::trace_value(rightSpaceRect_, visitor);
}

static pls::cs::Ref<graphics::RectangleF> Balloon_Draw_tmp_storage{};

static PLS_NOINLINE void cs_init_96c54d9323f24f8e_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(Balloon_Draw_tmp_storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.Balloon", flag, []() {
        Balloon_Draw_tmp_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.ui.Balloon.Draw_tmp", [&]() { return graphics::RectangleF::create(); });
    });
}

void Balloon::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_96c54d9323f24f8e_slow(flag);
}

pls::cs::Ref<graphics::RectangleF>& Balloon::Draw_tmp() {
    Balloon::ensure_initialized();
    return Balloon_Draw_tmp_storage;
}

void Balloon::create_init(pls::cs::Ref<Balloon> self, pls::cs::Ref<Balloon> balloon) {
    Balloon::ensure_initialized();
    self->maskList_ = pls::cs::List<pls::cs::Ref<graphics::Rectangle>>::make();
    self->clip_ = graphics::RectangleF::create();
    self->leftSpaceRect_ = graphics::RectangleF::create();
    self->rightSpaceRect_ = graphics::RectangleF::create();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.#ctor(kairo.unity.ui.Balloon)", kairo);
    {
        self->Init(balloon);
    }
}

void Balloon::create_init(pls::cs::Ref<Balloon> self, pls::cs::String text, pls::cs::Int32 color) {
    Balloon::ensure_initialized();
    self->maskList_ = pls::cs::List<pls::cs::Ref<graphics::Rectangle>>::make();
    self->clip_ = graphics::RectangleF::create();
    self->leftSpaceRect_ = graphics::RectangleF::create();
    self->rightSpaceRect_ = graphics::RectangleF::create();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.#ctor(System.String,System.Int32)", kairo);
    {
        self->Init(text, color);
    }
}

// M:kairo.unity.ui.Balloon.get_Text
pls::cs::String Balloon::get_Text(pls::cs::Ref<Balloon> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.get_Text", kairo);
    {
        return self->text_;
    }
}

// M:kairo.unity.ui.Balloon.set_Text(System.String)
void Balloon::set_Text(pls::cs::Ref<Balloon> self, pls::cs::String value) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.set_Text(System.String)", kairo);
    {
        self->text_ = util::Language::LT(value, literal(u""));
    }
}

// M:kairo.unity.ui.Balloon.get_TextColor
pls::cs::Int32 Balloon::get_TextColor(pls::cs::Ref<Balloon> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.get_TextColor", kairo);
    {
        return self->m_TextColor_k__BackingField;
    }
}

// M:kairo.unity.ui.Balloon.set_TextColor(System.Int32)
void Balloon::set_TextColor(pls::cs::Ref<Balloon> self, pls::cs::Int32 value) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.set_TextColor(System.Int32)", kairo);
    {
        self->m_TextColor_k__BackingField = value;
    }
}

// M:kairo.unity.ui.Balloon.get_Scale
pls::cs::Single Balloon::get_Scale(pls::cs::Ref<Balloon> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.get_Scale", kairo);
    {
        return self->m_Scale_k__BackingField;
    }
}

// M:kairo.unity.ui.Balloon.set_Scale(System.Single)
void Balloon::set_Scale(pls::cs::Ref<Balloon> self, pls::cs::Single value) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.set_Scale(System.Single)", kairo);
    {
        self->m_Scale_k__BackingField = value;
    }
}

// M:kairo.unity.ui.Balloon.get_Seb
pls::cs::Ref<Seb> Balloon::get_Seb(pls::cs::Ref<Balloon> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.get_Seb", kairo);
    {
        return self->m_Seb_k__BackingField;
    }
}

// M:kairo.unity.ui.Balloon.set_Seb(kairo.unity.ui.Seb)
void Balloon::set_Seb(pls::cs::Ref<Balloon> self, pls::cs::Ref<Seb> value) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.set_Seb(kairo.unity.ui.Seb)", kairo);
    {
        self->m_Seb_k__BackingField = value;
    }
}

// M:kairo.unity.ui.Balloon.get_FontSize
pls::cs::Int32 Balloon::get_FontSize(pls::cs::Ref<Balloon> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.get_FontSize", kairo);
    {
        return self->m_FontSize_k__BackingField;
    }
}

// M:kairo.unity.ui.Balloon.set_FontSize(System.Int32)
void Balloon::set_FontSize(pls::cs::Ref<Balloon> self, pls::cs::Int32 value) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.set_FontSize(System.Int32)", kairo);
    {
        self->m_FontSize_k__BackingField = value;
    }
}

// M:kairo.unity.ui.Balloon.#ctor(kairo.unity.ui.Balloon)
pls::cs::Ref<Balloon> Balloon::create(pls::cs::Ref<Balloon> balloon) {
    Balloon::ensure_initialized();
    auto self = pls::cs::make_ref<Balloon>();
    Balloon::create_init(self, balloon);
    return self;
}

// M:kairo.unity.ui.Balloon.#ctor(System.String,System.Int32)
pls::cs::Ref<Balloon> Balloon::create(pls::cs::String text, pls::cs::Int32 color) {
    Balloon::ensure_initialized();
    auto self = pls::cs::make_ref<Balloon>();
    Balloon::create_init(self, text, color);
    return self;
}

// M:kairo.unity.ui.Balloon.Init(System.String,System.Int32)
void Balloon::Init(pls::cs::String text, pls::cs::Int32 color) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.Init(System.String,System.Int32)", kairo);
    {
        Balloon::set_Text(this, text);
        Balloon::set_TextColor(this, color);
        shadowColor_ = -5460820;
        isShadow_ = true;
        Balloon::set_Scale(this, 1.0f);
        scale2_ = 1.0f;
        isTail_ = true;
        leftSpaceSeb_ = pls::cs::Ref<Seb>{};
        rightSpaceSeb_ = pls::cs::Ref<Seb>{};
        leftSpace_ = 0;
        rightSpace_ = 0;
        topSpace_ = 0;
        bottomSpace_ = 0;
        render_ =
            pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Single,
                                   pls::cs::Ref<graphics::RectangleF>, pls::cs::Ref<graphics::RectangleF>)>{};
        isClip_ = false;
        Balloon::set_Seb(this, pls::cs::Ref<Seb>{});
        Balloon::set_FontSize(this, 9);
        PLS_API(maskList_.Clear());
    }
}

// M:kairo.unity.ui.Balloon.Init(kairo.unity.ui.Balloon)
void Balloon::Init(pls::cs::Ref<Balloon> from) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Balloon.Init(kairo.unity.ui.Balloon)", kairo);
    {
        Balloon::set_Text(this, Balloon::get_Text(from));
        Balloon::set_TextColor(this, Balloon::get_TextColor(from));
        shadowColor_ = require(from)->shadowColor_;
        isShadow_ = require(from)->isShadow_;
        Balloon::set_Scale(this, Balloon::get_Scale(from));
        scale2_ = require(from)->scale2_;
        isTail_ = require(from)->isTail_;
        leftSpaceSeb_ = require(from)->leftSpaceSeb_;
        leftSpaceSebFrame_ = require(from)->leftSpaceSebFrame_;
        rightSpaceSeb_ = require(from)->rightSpaceSeb_;
        rightSpaceSebFrame_ = require(from)->rightSpaceSebFrame_;
        leftSpace_ = require(from)->leftSpace_;
        rightSpace_ = require(from)->rightSpace_;
        topSpace_ = require(from)->topSpace_;
        bottomSpace_ = require(from)->bottomSpace_;
        render_ = require(from)->render_;
        isClip_ = require(from)->isClip_;
        Balloon::set_Seb(this, Balloon::get_Seb(from));
        Balloon::set_FontSize(this, Balloon::get_FontSize(from));
        require(clip_)->Set(require(from)->clip_);
        PLS_API(maskList_.Clear());
        PLS_API(([&]() {
            auto cs_list = maskList_;
            auto cs_arg0 = require(from)->maskList_;
            cs_list.AddRange(cs_arg0);
        }()));
    }
}

// M:kairo.unity.ui.Balloon.SetClip(System.Int32,System.Int32,System.Int32,System.Int32)
void Balloon::SetClip(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 width, pls::cs::Int32 height) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Balloon.SetClip(System.Int32,System.Int32,System.Int32,System.Int32)",
                     kairo);
    {
        require(clip_)->Set(x, y, x + width, y + height);
        isClip_ = true;
    }
}

// M:kairo.unity.ui.Balloon.SetSpace(System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Balloon.BalloonRender)
void Balloon::SetSpace(
    pls::cs::Int32 left, pls::cs::Int32 right, pls::cs::Int32 top, pls::cs::Int32 bottom,
    pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Single,
                           pls::cs::Ref<graphics::RectangleF>, pls::cs::Ref<graphics::RectangleF>)>
        render) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Balloon.SetSpace(System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Balloon.BalloonRender)",
        kairo);
    {
        leftSpace_ = left;
        rightSpace_ = right;
        topSpace_ = top;
        bottomSpace_ = bottom;
        render_ = render;
        leftSpaceSeb_ = pls::cs::Ref<Seb>{};
        rightSpaceSeb_ = pls::cs::Ref<Seb>{};
    }
}

// M:kairo.unity.ui.Balloon.Draw(kairo.unity.ui.Graphics,System.Single,System.Single)
void Balloon::Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Balloon.Draw(kairo.unity.ui.Graphics,System.Single,System.Single)",
                     kairo);
    {
        Draw(g, x, y, pls::kairo::Matrix4x4::identity());
    }
}

// M:kairo.unity.ui.Balloon.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,UnityEngine.Matrix4x4)
void Balloon::Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                   pls::kairo::Matrix4x4 matrix) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Balloon.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,UnityEngine.Matrix4x4)",
        kairo);
    {
        Balloon::set_Text(this, util::Language::LT(Balloon::get_Text(this), literal(u"")));
        if (!PLS_API(require(g)->IsGUI())) {
            if (!is_null(require(g)->source_render_)) {
                pls::cs::Int32 num = 60;
                pls::cs::Int32 num2 = 20;
                pls::cs::Ref<graphics::RectangleF> transRectGUI =
                    PLS_API(PlsPortGeneratedBootstrap::Source::GetGraphicsTransRectGUI(
                        require(g), 0.0f, 0.0f, num, num2, Balloon::Draw_tmp()));
                pls::cs::Single num3 = require(transRectGUI)->Width() / pls::cs::Single(num);
                pls::cs::Single num4 = require(transRectGUI)->Height() / pls::cs::Single(num2);
                pls::cs::Single num5 = ((num3 < num4) ? num3 : num4);
                Image_BalloonRenderTask item =
                    Image_BalloonRenderTask::create(this, x, y, require(g)->offscreen_);
                {
                    auto cs_receiver = item.Balloon;
                    auto cs_old = Balloon::get_Scale(cs_receiver);
                    auto cs_rhs = num5;
                    pls::cs::Single cs_value = cs_old * cs_rhs;
                    Balloon::set_Scale(cs_receiver, cs_value);
                }
                if (PLS_API(require(g)->IsClipEnable())) {
                    IntArray clip = PLS_API(require(g)->GetClip());
                    if ([&]() {
                            auto cs_left = pls::cs::box(clip);
                            auto cs_right = pls::cs::box(IntArray{});
                            return cs_left != cs_right;
                        }()) {
                        {
                            auto cs_receiver = item.Balloon;
                            pls::cs::Int32 cs_arg0 = clip[0];
                            pls::cs::Int32 cs_arg1 = clip[1];
                            pls::cs::Int32 cs_arg2 = clip[2];
                            pls::cs::Int32 cs_arg3 = clip[3];
                            require(cs_receiver)->SetClip(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                        }
                    }
                } else {
                    FloatArray imageClip = PLS_API(require(g)->GetImageClip());
                    if ([&]() {
                            auto cs_left = pls::cs::box(imageClip);
                            auto cs_right = pls::cs::box(FloatArray{});
                            return cs_left != cs_right;
                        }()) {
                        {
                            auto cs_receiver = item.Balloon;
                            pls::cs::Int32 cs_arg0 = pls::cs::to_int32(imageClip[0]);
                            pls::cs::Int32 cs_arg1 = pls::cs::to_int32(imageClip[1]);
                            pls::cs::Int32 cs_arg2 = pls::cs::to_int32(imageClip[2]);
                            pls::cs::Int32 cs_arg3 = pls::cs::to_int32(imageClip[3]);
                            require(cs_receiver)->SetClip(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                        }
                    }
                }
                PLS_API(require(require(g)->source_render_)
                            ->source_balloon_tasks<Image_BalloonRenderTask>()
                            .Add(item));
                return;
            }
        } else {
            pls::cs::Single num6 = x;
            pls::cs::Single num7 = y;
            PLS_API(([&]() -> void {
                pls::cs::Ref<Matrix> cs_arg0 = ([&]() -> pls::cs::Ref<Matrix> {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = Balloon::get_Scale(this);
                        auto cs_right = scale2_;
                        return cs_left * cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = Balloon::get_Scale(this);
                        auto cs_right = scale2_;
                        return cs_left * cs_right;
                    }());
                    return Matrix::ScaleTemporary(cs_arg0, cs_arg1, 0.0f, 0.0f);
                }());
                PlsPortGeneratedBootstrap::Source::PushGraphicsMatrix(require(g), cs_arg0);
            }()));
            PLS_API(([&]() -> void {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                if (!cs_receiver)
                    throw pls::cs::NullReferenceException();
                auto& cs_arg0 = x;
                auto& cs_arg1 = y;
                cs_receiver->BeginLocalCoordination(cs_arg0, cs_arg1);
            }()));
            PLS_API(([&]() -> void {
                pls::cs::Int32 cs_arg0 = Balloon::get_FontSize(this);
                require(g)->PushFont(cs_arg0);
            }()));
            pls::cs::Ref<Seb> seb = Balloon::get_Seb(this);
            if (is_null(seb)) {
                seb = require(PLS_API(PlsPortGeneratedBootstrap::Source::GetApplicationResource(
                                  require(PLS_API(pls::kairo::IApplication::GetCurrentApp())))))
                          ->seb.get_Item(3);
            }
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img = require(require(seb)->manager_)->img;
            pls::cs::Ref<pls::kairo::Font> font =
                PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
            pls::cs::Int32 num8 = PLS_API(([&]() -> pls::cs::Int32 {
                pls::cs::String cs_arg0 = Balloon::get_Text(this);
                return require(font)->StringWidth(cs_arg0);
            }()));
            pls::cs::Int32 num9 = (num8 - 3) / 2 * 2;
            if (num9 < 0) {
                num9 = 0;
            }
            pls::cs::Int32 num10 =
                pls::cs::cast_integral<pls::cs::Int32>(require(seb)->GetBoundingRect(0)[2]);
            pls::cs::Int32 num11 =
                pls::cs::cast_integral<pls::cs::Int32>(require(seb)->GetBoundingRect(2)[2]);
            pls::cs::Int32 num12 =
                pls::cs::cast_integral<pls::cs::Int32>(require(seb)->GetBoundingRect(0)[3]);
            pls::cs::Int32 num13 =
                pls::cs::cast_integral<pls::cs::Int32>(require(seb)->GetBoundingRect(6)[3]);
            pls::cs::Int32 num14 = num10 + leftSpace_ + num9 + rightSpace_ + num11;
            pls::cs::Int32 num15 = num12 + topSpace_ + bottomSpace_ + num13;
            pls::cs::Single num16 = x - pls::cs::Single((num14 / 2)) - 1.0f;
            pls::cs::Single num17 = y - pls::cs::Single(num15) - 2.0f;
            pls::cs::Single num18 = num16;
            pls::cs::Single num19 = num17;
            pls::cs::Single num20 = num16 + pls::cs::Single(num14);
            pls::cs::Single num21 = num17 + pls::cs::Single(num15);
            if (isTail_) {
                num21 += 2.0f;
            }
            num18 /= Balloon::get_Scale(this);
            num19 /= Balloon::get_Scale(this);
            num20 /= Balloon::get_Scale(this);
            num21 /= Balloon::get_Scale(this);
            pls::cs::Single num22 = num18 - 200.0f;
            pls::cs::Single num23 = num19 - 200.0f;
            pls::cs::Single num24 = num20 + 200.0f;
            pls::cs::Single num25 = num21 + 200.0f;
            if (isClip_) {
                pls::kairo::Vector3 vector = PLS_API(([&]() {
                    auto cs_arg0 = ([&]() {
                        auto cs_arg0 = require(clip_)->left;
                        auto cs_arg1 = require(clip_)->top;
                        return pls::kairo::Vector3(cs_arg0, cs_arg1);
                    }());
                    return matrix.MultiplyPoint(cs_arg0);
                }()));
                pls::kairo::Vector3 vector2 = PLS_API(([&]() {
                    auto cs_arg0 = ([&]() {
                        auto cs_arg0 = require(clip_)->right;
                        auto cs_arg1 = require(clip_)->bottom;
                        return pls::kairo::Vector3(cs_arg0, cs_arg1);
                    }());
                    return matrix.MultiplyPoint(cs_arg0);
                }()));
                pls::cs::Ref<graphics::RectangleF> draw_tmp = Balloon::Draw_tmp();
                {
                    auto cs_left_44 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left_44 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_44 = vector.x;
                            auto cs_right_44 = Balloon::get_Scale(this);
                            return cs_left_44 / cs_right_44;
                        }());
                        auto cs_right_44 = Balloon::get_Scale(this);
                        return cs_left_44 / cs_right_44;
                    }());
                    auto cs_right_44 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left_44 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_44 = num6 / Balloon::get_Scale(this);
                            auto cs_right_44 = Balloon::get_Scale(this);
                            return cs_left_44 / cs_right_44;
                        }());
                        auto cs_right_44 = scale2_;
                        return cs_left_44 / cs_right_44;
                    }());
                    pls::cs::Single cs_arg0 = pls::cs::FloatEval(cs_left_44 - cs_right_44);
                    auto cs_left_45 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left_45 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_45 = vector.y;
                            auto cs_right_45 = Balloon::get_Scale(this);
                            return cs_left_45 / cs_right_45;
                        }());
                        auto cs_right_45 = Balloon::get_Scale(this);
                        return cs_left_45 / cs_right_45;
                    }());
                    auto cs_right_45 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left_45 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_45 = num7 / Balloon::get_Scale(this);
                            auto cs_right_45 = Balloon::get_Scale(this);
                            return cs_left_45 / cs_right_45;
                        }());
                        auto cs_right_45 = scale2_;
                        return cs_left_45 / cs_right_45;
                    }());
                    pls::cs::Single cs_arg1 = pls::cs::FloatEval(cs_left_45 - cs_right_45);
                    auto cs_left_46 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left_46 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_46 = vector2.x;
                            auto cs_right_46 = Balloon::get_Scale(this);
                            return cs_left_46 / cs_right_46;
                        }());
                        auto cs_right_46 = Balloon::get_Scale(this);
                        return cs_left_46 / cs_right_46;
                    }());
                    auto cs_right_46 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left_46 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_46 = num6 / Balloon::get_Scale(this);
                            auto cs_right_46 = Balloon::get_Scale(this);
                            return cs_left_46 / cs_right_46;
                        }());
                        auto cs_right_46 = scale2_;
                        return cs_left_46 / cs_right_46;
                    }());
                    pls::cs::Single cs_arg2 = pls::cs::FloatEval(cs_left_46 - cs_right_46);
                    auto cs_left_47 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left_47 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_47 = vector2.y;
                            auto cs_right_47 = Balloon::get_Scale(this);
                            return cs_left_47 / cs_right_47;
                        }());
                        auto cs_right_47 = Balloon::get_Scale(this);
                        return cs_left_47 / cs_right_47;
                    }());
                    auto cs_right_47 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left_47 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_47 = num7 / Balloon::get_Scale(this);
                            auto cs_right_47 = Balloon::get_Scale(this);
                            return cs_left_47 / cs_right_47;
                        }());
                        auto cs_right_47 = scale2_;
                        return cs_left_47 / cs_right_47;
                    }());
                    pls::cs::Single cs_arg3 = pls::cs::FloatEval(cs_left_47 - cs_right_47);
                    require(draw_tmp)->Set(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
                if (require(draw_tmp)->right < num24) {
                    num24 = require(draw_tmp)->right;
                }
                if (require(draw_tmp)->bottom < num25) {
                    num25 = require(draw_tmp)->bottom;
                }
                if (num22 < require(draw_tmp)->left) {
                    num22 = require(draw_tmp)->left;
                }
                if (num23 < require(draw_tmp)->top) {
                    num23 = require(draw_tmp)->top;
                }
                if (num24 < num22) {
                    num22 = num24;
                }
                if (num25 < num23) {
                    num23 = num25;
                }
                if (num18 < num22) {
                    num18 = num22;
                }
                if (num19 < num23) {
                    num19 = num23;
                }
                if (num20 > num24) {
                    num20 = num24;
                }
                if (num21 > num25) {
                    num21 = num25;
                }
            }
            bool flag = false;
            {
                auto cs_list_enum84 = maskList_.GetEnumerator();

                struct cs_list_scope84 {
                    decltype(cs_list_enum84)& e;

                    ~cs_list_scope84() { e.Dispose(); }
                } cs_scope84{cs_list_enum84};

                while (cs_list_enum84.MoveNext()) {
                    pls::cs::Ref<graphics::Rectangle> item2 = cs_list_enum84.get_Current();
                    {
                        pls::kairo::Vector3 vector3 = PLS_API(([&]() {
                            auto cs_arg0 = ([&]() {
                                auto cs_arg0 = require(item2)->left;
                                auto cs_arg1 = require(item2)->top;
                                return pls::kairo::Vector3(cs_arg0, cs_arg1);
                            }());
                            return matrix.MultiplyPoint(cs_arg0);
                        }()));
                        pls::kairo::Vector3 vector4 = PLS_API(([&]() {
                            auto cs_arg0 = ([&]() {
                                auto cs_arg0 = require(item2)->right;
                                auto cs_arg1 = require(item2)->bottom;
                                return pls::kairo::Vector3(cs_arg0, cs_arg1);
                            }());
                            return matrix.MultiplyPoint(cs_arg0);
                        }()));
                        pls::cs::Ref<graphics::RectangleF> draw_tmp2 = Balloon::Draw_tmp();
                        {
                            auto cs_left_48 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left_48 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_48 = vector3.x;
                                    auto cs_right_48 = Balloon::get_Scale(this);
                                    return cs_left_48 / cs_right_48;
                                }());
                                auto cs_right_48 = Balloon::get_Scale(this);
                                return cs_left_48 / cs_right_48;
                            }());
                            auto cs_right_48 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left_48 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_48 = num6 / Balloon::get_Scale(this);
                                    auto cs_right_48 = Balloon::get_Scale(this);
                                    return cs_left_48 / cs_right_48;
                                }());
                                auto cs_right_48 = scale2_;
                                return cs_left_48 / cs_right_48;
                            }());
                            pls::cs::Single cs_arg0 = pls::cs::FloatEval(cs_left_48 - cs_right_48);
                            auto cs_left_49 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left_49 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_49 = vector3.y;
                                    auto cs_right_49 = Balloon::get_Scale(this);
                                    return cs_left_49 / cs_right_49;
                                }());
                                auto cs_right_49 = Balloon::get_Scale(this);
                                return cs_left_49 / cs_right_49;
                            }());
                            auto cs_right_49 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left_49 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_49 = num7 / Balloon::get_Scale(this);
                                    auto cs_right_49 = Balloon::get_Scale(this);
                                    return cs_left_49 / cs_right_49;
                                }());
                                auto cs_right_49 = scale2_;
                                return cs_left_49 / cs_right_49;
                            }());
                            pls::cs::Single cs_arg1 = pls::cs::FloatEval(cs_left_49 - cs_right_49);
                            auto cs_left_50 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left_50 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_50 = vector4.x;
                                    auto cs_right_50 = Balloon::get_Scale(this);
                                    return cs_left_50 / cs_right_50;
                                }());
                                auto cs_right_50 = Balloon::get_Scale(this);
                                return cs_left_50 / cs_right_50;
                            }());
                            auto cs_right_50 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left_50 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_50 = num6 / Balloon::get_Scale(this);
                                    auto cs_right_50 = Balloon::get_Scale(this);
                                    return cs_left_50 / cs_right_50;
                                }());
                                auto cs_right_50 = scale2_;
                                return cs_left_50 / cs_right_50;
                            }());
                            pls::cs::Single cs_arg2 = pls::cs::FloatEval(cs_left_50 - cs_right_50);
                            auto cs_left_51 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left_51 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_51 = vector4.y;
                                    auto cs_right_51 = Balloon::get_Scale(this);
                                    return cs_left_51 / cs_right_51;
                                }());
                                auto cs_right_51 = Balloon::get_Scale(this);
                                return cs_left_51 / cs_right_51;
                            }());
                            auto cs_right_51 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left_51 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_51 = num7 / Balloon::get_Scale(this);
                                    auto cs_right_51 = Balloon::get_Scale(this);
                                    return cs_left_51 / cs_right_51;
                                }());
                                auto cs_right_51 = scale2_;
                                return cs_left_51 / cs_right_51;
                            }());
                            pls::cs::Single cs_arg3 = pls::cs::FloatEval(cs_left_51 - cs_right_51);
                            require(draw_tmp2)->Set(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                        }
                        if ([&]() -> bool {
                                pls::cs::Single cs_arg0 = num18;
                                pls::cs::Single cs_arg1 = num19;
                                pls::cs::Single cs_arg2 = num20 - num18;
                                pls::cs::Single cs_arg3 = num21 - num19;
                                pls::cs::Single cs_arg4 = require(draw_tmp2)->left;
                                pls::cs::Single cs_arg5 = require(draw_tmp2)->top;
                                pls::cs::Single cs_arg6 = require(draw_tmp2)->Width();
                                pls::cs::Single cs_arg7 = require(draw_tmp2)->Height();
                                return math::KairoMath::CheckHitRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3,
                                                                     cs_arg4, cs_arg5, cs_arg6, cs_arg7);
                            }()) {
                            bool flag2 =
                                require(draw_tmp2)->left <= num18 && num18 <= require(draw_tmp2)->right;
                            bool flag3 =
                                require(draw_tmp2)->left <= num20 && num20 <= require(draw_tmp2)->right;
                            bool flag4 =
                                require(draw_tmp2)->top <= num19 && num19 <= require(draw_tmp2)->bottom;
                            bool flag5 =
                                require(draw_tmp2)->top <= num21 && num21 <= require(draw_tmp2)->bottom;
                            pls::cs::Int32 num26 = 0;
                            if (flag2) {
                                ++num26;
                            }
                            if (flag3) {
                                ++num26;
                            }
                            if (flag4) {
                                ++num26;
                            }
                            if (flag5) {
                                ++num26;
                            }
                            if (num26 == 3) {
                                if (!flag5) {
                                    num19 = require(draw_tmp2)->bottom;
                                    num23 = num19;
                                }
                                if (!flag4) {
                                    num21 = require(draw_tmp2)->top;
                                    num25 = num21;
                                }
                                if (!flag2) {
                                    num20 = require(draw_tmp2)->left;
                                    num24 = num20;
                                }
                                if (!flag3) {
                                    num18 = require(draw_tmp2)->right;
                                    num22 = num18;
                                }
                            } else {
                                flag = true;
                            }
                            continue;
                        }
                        {
                            bool flag6 = require(draw_tmp2)->right < num18;
                            bool flag7 = num20 < require(draw_tmp2)->left;
                            bool flag8 = require(draw_tmp2)->bottom < num19;
                            bool flag9 = num21 < require(draw_tmp2)->top;
                            pls::cs::Int32 num27 = 0;
                            if (flag6) {
                                ++num27;
                            }
                            if (flag7) {
                                ++num27;
                            }
                            if (flag8) {
                                ++num27;
                            }
                            if (flag9) {
                                ++num27;
                            }
                            if (num27 == 1) {
                                if (flag6 && require(draw_tmp2)->right > num22) {
                                    num22 = require(draw_tmp2)->right;
                                }
                                if (flag7 && require(draw_tmp2)->left < num24) {
                                    num24 = require(draw_tmp2)->left;
                                }
                                if (flag8 && require(draw_tmp2)->bottom > num23) {
                                    num23 = require(draw_tmp2)->bottom;
                                }
                                if (flag9 && require(draw_tmp2)->top < num25) {
                                    num25 = require(draw_tmp2)->top;
                                }
                            }
                        }
                    }
                }
            }
            if (!flag) {
                num22 = num22 * Balloon::get_Scale(this) + num6;
                num23 = num23 * Balloon::get_Scale(this) + num7;
                num24 = num24 * Balloon::get_Scale(this) + num6;
                num25 = num25 * Balloon::get_Scale(this) + num7;
                PLS_API(require(g)->ClipRect(num22 - num6, num23 - num7, num24 - num22, num25 - num23, true));
                pls::cs::Single num28 =
                    num16 + pls::cs::Single(num10) - pls::cs::Single((num8 - num9)) / 2.0f;
                pls::cs::Single num29 = num16 + pls::cs::Single(num14) - pls::cs::Single(num11) -
                                        pls::cs::Single(rightSpace_) + pls::cs::Single((num8 - num9)) / 2.0f;
                pls::cs::Single num30 = num17;
                require(seb)->DrawFrame(g, num16, num17, img, 0, -1);
                DrawRepeat(g, num16 + pls::cs::Single(num10), num17, num14 - num10 - num11, -1, seb, 1);
                require(seb)->DrawFrame(g, num16 + pls::cs::Single(num14) - pls::cs::Single(num11), num17,
                                        img, 2, -1);
                DrawRepeat(g, num16, num17 + pls::cs::Single(num12), -1, num15 - num12 - num13, seb, 3);
                DrawRepeat(g, num16 + pls::cs::Single(num10), num17 + pls::cs::Single(num12),
                           num14 - num10 - num11, num15 - num12 - num13, seb, 4);
                DrawRepeat(g, num16 + pls::cs::Single(num14) - pls::cs::Single(num11),
                           num17 + pls::cs::Single(num12), -1, num15 - num12 - num13, seb, 5);
                require(seb)->DrawFrame(g, num16, num17 + pls::cs::Single(num15) - pls::cs::Single(num13),
                                        img, 6, -1);
                DrawRepeat(g, num16 + pls::cs::Single(num10),
                           num17 + pls::cs::Single(num15) - pls::cs::Single(num13), num14 - num10 - num11, -1,
                           seb, 7);
                require(seb)->DrawFrame(g, num16 + pls::cs::Single(num14) - pls::cs::Single(num11),
                                        num17 + pls::cs::Single(num15) - pls::cs::Single(num13), img, 8, -1);
                if (isTail_) {
                    require(seb)->DrawFrame(g, x - 5.0f, y - 6.0f, img, 9, -1);
                }
                num17 = y - pls::cs::Single(num15) + 2.0f + pls::cs::Single(topSpace_);
                pls::cs::Single x2 = num16 + pls::cs::Single(num10) + pls::cs::Single(leftSpace_) -
                                     pls::cs::Single((num8 - num9)) / 2.0f;
                pls::cs::Single num31 = num17 + pls::cs::Single((9 - Balloon::get_FontSize(this))) / 2.0f;
                bool flag10 = PLS_API(([&]() {
                    auto cs_text = Balloon::get_Text(this);
                    auto cs_char = u'<';
                    return index_char1(cs_text, cs_char) != -1;
                }()));
                if (isShadow_) {
                    bool pictographVisible = TextLayout::IsPictographVisible();
                    TextLayout::SetPictographVisible(false);
                    PLS_API(require(g)->SetColor(shadowColor_));
                    pls::cs::String str = TextLayout::RemoveColorTag(Balloon::get_Text(this));
                    if (native::KairoPlugin::IsWeakDrawDevice()) {
                        if (flag10) {
                            Graphics::DrawString2(require(g), str, x2, num31 + 0.5f);
                        } else {
                            PLS_API(require(g)->DrawString(str, x2, num31 + 0.5f));
                        }
                    } else if (flag10) {
                        Graphics::DrawString2(require(g), str, x2, num31 + 0.5f);
                        Graphics::DrawString2(require(g), str, x2, num31 + 0.25f);
                    } else {
                        PLS_API(require(g)->DrawString(str, x2, num31 + 0.5f));
                        PLS_API(require(g)->DrawString(str, x2, num31 + 0.25f));
                    }
                    TextLayout::SetPictographVisible(pictographVisible);
                }
                PLS_API(([&]() -> void {
                    pls::cs::Int32 cs_arg0 = Balloon::get_TextColor(this);
                    require(g)->SetColor(cs_arg0);
                }()));
                if (flag10) {
                    {
                        pls::cs::String cs_arg0 = Balloon::get_Text(this);
                        Graphics::DrawString2(require(g), cs_arg0, x2, num31);
                    }
                } else {
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = Balloon::get_Text(this);
                        require(g)->DrawString(cs_arg0, x2, num31);
                    }()));
                }
                if (!is_null(leftSpaceSeb_)) {
                    ShortArray boundingRect = require(leftSpaceSeb_)->GetBoundingRect(leftSpaceSebFrame_);
                    {
                        auto cs_receiver = leftSpaceSeb_;
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        pls::cs::Single cs_arg1 = num28 - pls::cs::Single(boundingRect[0]);
                        auto cs_left_52 = num17 - pls::cs::Single(boundingRect[1]);
                        auto cs_right_52 =
                            pls::cs::Single((([&]() -> pls::cs::Int32 {
                                auto cs_left_52 = pls::cs::Int32(PLS_API(require(font)->GetHeight()));
                                auto cs_right_52 = pls::cs::cast_integral<pls::cs::Int32>(boundingRect[3]);
                                return cs_left_52 - cs_right_52;
                            }()))) /
                            2.0f;
                        pls::cs::Single cs_arg2 = pls::cs::FloatEval(cs_left_52 + cs_right_52);
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(leftSpaceSeb_)->manager_)->img;
                        pls::cs::Int32 cs_arg4 = leftSpaceSebFrame_;
                        require(cs_receiver)->DrawFrame(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, -1);
                    }
                }
                if (!is_null(rightSpaceSeb_)) {
                    ShortArray boundingRect2 = require(rightSpaceSeb_)->GetBoundingRect(rightSpaceSebFrame_);
                    {
                        auto cs_receiver = rightSpaceSeb_;
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        pls::cs::Single cs_arg1 = num29 - pls::cs::Single(boundingRect2[0]) + 1.0f;
                        auto cs_left_53 = num17 - pls::cs::Single(boundingRect2[1]);
                        auto cs_right_53 =
                            pls::cs::Single((([&]() -> pls::cs::Int32 {
                                auto cs_left_53 = pls::cs::Int32(PLS_API(require(font)->GetHeight()));
                                auto cs_right_53 = pls::cs::cast_integral<pls::cs::Int32>(boundingRect2[3]);
                                return cs_left_53 - cs_right_53;
                            }()))) /
                            2.0f;
                        pls::cs::Single cs_arg2 = pls::cs::FloatEval(cs_left_53 + cs_right_53);
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(rightSpaceSeb_)->manager_)->img;
                        pls::cs::Int32 cs_arg4 = rightSpaceSebFrame_;
                        require(cs_receiver)->DrawFrame(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, -1);
                    }
                }
                if ([&]() {
                        auto cs_left = render_;
                        auto cs_right = pls::cs::Delegate<void(
                            pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Single,
                            pls::cs::Ref<graphics::RectangleF>, pls::cs::Ref<graphics::RectangleF>)>{};
                        return cs_left != cs_right;
                    }()) {
                    require(leftSpaceRect_)
                        ->Set(num28, num30 + pls::cs::Single(num12) - 4.0f,
                              num28 + pls::cs::Single(leftSpace_),
                              num30 + pls::cs::Single(num15) - pls::cs::Single(num13) + 5.0f);
                    require(rightSpaceRect_)
                        ->Set(num29, num30 + pls::cs::Single(num12) - 4.0f,
                              num29 + pls::cs::Single(rightSpace_),
                              num30 + pls::cs::Single(num15) - pls::cs::Single(num13) + 5.0f);
                    {
                        auto cs_delegate = render_;
                        auto cs_arg0 = g;
                        auto cs_arg1 = num17;
                        auto cs_arg2 = leftSpaceRect_;
                        auto cs_arg3 = rightSpaceRect_;
                        cs_delegate(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                    }
                }
                PLS_API(require(g)->PopClip());
            }
            PLS_API(require(g)->PopFont());
            PLS_API(require(g)->EndLocalCoordination());
            PLS_API(require(g)->PopMatrix());
        }
    }
}

// M:kairo.unity.ui.Balloon.DrawRepeat(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32)
void Balloon::DrawRepeat(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                         pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Ref<Seb> seb,
                         pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Balloon.DrawRepeat(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32)",
        kairo);
    {
        IntArray sprite = require(seb)->GetSprite(frame, 0);
        if (width == -1) {
            width = sprite[4];
        }
        if (height == -1) {
            height = sprite[5];
        }
        pls::cs::Int32 num = 0;
        while (num < height) {
            pls::cs::Int32 num2 = height - num;
            if (num2 > sprite[5]) {
                num2 = sprite[5];
            }
            pls::cs::Int32 num3 = 0;
            while (num3 < width) {
                pls::cs::Int32 num4 = width - num3;
                if (num4 > sprite[4]) {
                    num4 = sprite[4];
                }
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(seb)->manager_)->img.get_Item(sprite[1]);
                    pls::cs::Int32 cs_arg3 = sprite[2];
                    pls::cs::Int32 cs_arg4 = sprite[3];
                    require(g)->DrawImage(cs_arg0, x + pls::cs::Single(num3), y + pls::cs::Single(num),
                                          cs_arg3, cs_arg4, num4, num2);
                }()));
                num3 += num4;
            }
            num += num2;
        }
    }
}
} // namespace kairo::unity::ui
}
