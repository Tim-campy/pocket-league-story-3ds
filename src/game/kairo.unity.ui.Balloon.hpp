// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct Balloon : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.ui.Balloon", Balloon, pls::cs::Object)
    pls::cs::Int32 m_TextColor_k__BackingField{};
    pls::cs::Single m_Scale_k__BackingField{};
    pls::cs::Ref<Seb> m_Seb_k__BackingField{};
    pls::cs::Int32 m_FontSize_k__BackingField{};
    pls::cs::Single scale2_{};
    pls::cs::String text_{};
    bool isTail_{};
    pls::cs::Int32 leftSpace_{};
    pls::cs::Int32 rightSpace_{};
    pls::cs::Int32 topSpace_{};
    pls::cs::Int32 bottomSpace_{};
    bool isClip_{};
    pls::cs::Int32 shadowColor_{};
    bool isShadow_{};
    pls::cs::Ref<Seb> leftSpaceSeb_{};
    pls::cs::Int32 leftSpaceSebFrame_{};
    pls::cs::Ref<Seb> rightSpaceSeb_{};
    pls::cs::Int32 rightSpaceSebFrame_{};
    pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Single,
                           pls::cs::Ref<graphics::RectangleF>, pls::cs::Ref<graphics::RectangleF>)>
        render_{};
    pls::cs::List<pls::cs::Ref<graphics::Rectangle>> maskList_{};
    pls::cs::Ref<graphics::RectangleF> clip_{};
    pls::cs::Ref<graphics::RectangleF> leftSpaceRect_{};
    pls::cs::Ref<graphics::RectangleF> rightSpaceRect_{};
    static constexpr pls::cs::Int32 COLOR_BLUE = -15972869;
    static constexpr pls::cs::Int32 COLOR_RED = -51144;
    static constexpr pls::cs::Int32 COLOR_BLACK = -14803426;
    static constexpr pls::cs::Int32 COLOR_SHADOW = -5460820;
    static void ensure_initialized();

    static pls::cs::Ref<graphics::RectangleF>& Draw_tmp();

    static void create_init(pls::cs::Ref<Balloon> self, pls::cs::Ref<Balloon> balloon);

    static void create_init(pls::cs::Ref<Balloon> self, pls::cs::String text, pls::cs::Int32 color);

    static pls::cs::String get_Text(pls::cs::Ref<Balloon> self);

    static void set_Text(pls::cs::Ref<Balloon> self, pls::cs::String value);

    static pls::cs::Int32 get_TextColor(pls::cs::Ref<Balloon> self);

    static void set_TextColor(pls::cs::Ref<Balloon> self, pls::cs::Int32 value);

    static pls::cs::Single get_Scale(pls::cs::Ref<Balloon> self);

    static void set_Scale(pls::cs::Ref<Balloon> self, pls::cs::Single value);

    static pls::cs::Ref<Seb> get_Seb(pls::cs::Ref<Balloon> self);

    static void set_Seb(pls::cs::Ref<Balloon> self, pls::cs::Ref<Seb> value);

    static pls::cs::Int32 get_FontSize(pls::cs::Ref<Balloon> self);

    static void set_FontSize(pls::cs::Ref<Balloon> self, pls::cs::Int32 value);

    static pls::cs::Ref<Balloon> create(pls::cs::Ref<Balloon> balloon);

    static pls::cs::Ref<Balloon> create(pls::cs::String text, pls::cs::Int32 color);

    void Init(pls::cs::Ref<Balloon> from);

    void Init(pls::cs::String text, pls::cs::Int32 color);

    void SetClip(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 width, pls::cs::Int32 height);

    void
    SetSpace(pls::cs::Int32 left, pls::cs::Int32 right, pls::cs::Int32 top, pls::cs::Int32 bottom,
             pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Single,
                                    pls::cs::Ref<graphics::RectangleF>, pls::cs::Ref<graphics::RectangleF>)>
                 render);

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
              pls::kairo::Matrix4x4 matrix);

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y);

    void DrawRepeat(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                    pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Ref<Seb> seb, pls::cs::Int32 frame);
};
} // namespace kairo::unity::ui
}
