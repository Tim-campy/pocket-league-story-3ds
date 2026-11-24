// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct TextLayout : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.ui.TextLayout", TextLayout, pls::cs::Object)
    pls::cs::Array<pls::cs::Ref<TextLayout_TextBlock>> textBlocks_{};
    pls::cs::Ref<pls::kairo::Font> font_{};
    pls::cs::Int32 color_{};
    pls::cs::String text_{};
    pls::cs::Int32 textHashCode_{};
    pls::cs::Int32 length_{};
    pls::cs::Single width_{};
    pls::cs::Single height_{};
    pls::cs::Int32 pos_{};
    pls::cs::Int32 speed_{};
    pls::cs::Int64 beginTime_{};
    pls::cs::Int32 lineSpace_{};
    pls::cs::Int32 anchor_{};
    pls::cs::Single textWidth_{};
    bool format_{};
    pls::cs::Int32 frame_{};
    pls::cs::Int32 draw_{};
    bool autoScale_{};
    pls::cs::Single scaleRatio_{};
    pls::cs::Int32 textCheckSize_{};
    bool multiLine_{};
    bool localizeFontEnable_{};
    bool adjustFontSize_{};
    bool overArea_{};

    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Ref<TextLayout>>& cache_();

    static pls::cs::Int32& cachePointer_();

    static pls::cs::Int32& DEFAULT_CACHE_SIZE();

    static pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<Pictograph>>& pictographList_();

    static bool& pictographVisible_();

    static bool& renderRectVisible_();

    static pls::cs::Array<pls::cs::String>& TAG();

    static void create_init(pls::cs::Ref<TextLayout> self);

    static void create_init(pls::cs::Ref<TextLayout> self, bool autoScale, bool localizeFontEnable);

    static pls::cs::Ref<TextLayout> create();

    static pls::cs::Ref<TextLayout> create(bool autoScale, bool localizeFontEnable);

    void Init();

    void SetText(pls::cs::String text);

    pls::cs::String GetText();

    void _makeTextBlocks();

    pls::cs::Int32 GetHeight();

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single dx, pls::cs::Single dy,
              pls::cs::Int32 scrollV);

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single dx, pls::cs::Single dy);

    static void Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text, pls::cs::Single x,
                     pls::cs::Single y, pls::cs::Int32 color, pls::cs::Int32 anchor);

    static void Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text, pls::cs::Single x,
                     pls::cs::Single y, pls::cs::Single w, pls::cs::Single h, pls::cs::Int32 color,
                     pls::cs::Int32 lineSpace, pls::cs::Int32 anchor);

    static void Draw(pls::cs::Ref<TextFormat> lf, pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text,
                     pls::cs::Single x, pls::cs::Single y, pls::cs::Int32 color, pls::cs::Int32 anchor);

    static void Draw(pls::cs::Ref<TextFormat> lf, pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text,
                     pls::cs::Single x, pls::cs::Single y, pls::cs::Single w, pls::cs::Single h,
                     pls::cs::Int32 color, pls::cs::Int32 lineSpace, pls::cs::Int32 anchor);

    void Frame();

    void SetSpeed(pls::cs::Int32 speed);

    void SetColor(pls::cs::Int32 color);

    void SetFontSize(pls::cs::Int32 size);

    void SetAnchor(pls::cs::Int32 anchor);

    void Flush();

    bool IsEnd();

    void SetSize(pls::cs::Single w, pls::cs::Single h);

    void SetLineSpace(pls::cs::Int32 lineSpace);

    void Dispose();

    static pls::cs::Single StringWidthF(pls::cs::Ref<TextFormat> lf, pls::cs::Ref<pls::kairo::Font> font,
                                        pls::cs::String text);

    static pls::cs::Ref<TextLayout> SearchCache(pls::cs::String text, pls::cs::Single w, pls::cs::Single h,
                                                pls::cs::Int32 color, pls::cs::Int32 lineSpace,
                                                pls::cs::Int32 anchor, pls::cs::Int32 font,
                                                pls::cs::Single scaleRatio);

    static void AddCache(pls::cs::Ref<TextLayout> lay);

    pls::cs::Single GetTextWidthF();

    void SetGraphicsScale(pls::cs::Single scaleRatio);

    pls::cs::Int32 GetRenderingFontSize();

    static pls::cs::Ref<Pictograph> GetPictograph(pls::cs::String key);

    static void SetPictographVisible(bool visible);

    static bool IsPictographVisible();

    static pls::cs::String RemoveColorTag(pls::cs::String text);
};
} // namespace kairo::unity::ui
}
