// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct Seb : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"ToString", "M:kairo.unity.ui.Seb.ToString"},
                       {"GetHashCode", "M:kairo.unity.ui.Seb.GetHashCode"});
    PLS_MANAGED_CLASS("kairo.unity.ui.Seb", Seb, pls::cs::Object)
    pls::cs::String name_{};
    pls::cs::Int32 currentFrame_{};
    pls::cs::Int32 maxFrame_{};
    pls::cs::Array<pls::cs::Int32> layerHeads_{};
    pls::cs::Array<std::int16_t> spriteFrames_{};
    pls::cs::Array<std::int8_t> spriteBuffer_{};
    pls::cs::Array<std::int16_t> spritesBufferEx_{};
    std::int8_t flip_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>> cache_{};
    pls::cs::Int64 boundingRect_{};
    pls::cs::Array<std::int8_t> boundingRects_{};
    pls::cs::Array<std::int16_t> boundingRectsEx_{};
    pls::cs::Ref<ResourceManager> manager_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Ref<DepthInfo>>> depthInfoList_{};
    pls::cs::Array<pls::cs::Single> offset_{};
    pls::cs::Ref<Seb_WorkValue> threadLocal_{};
    pls::cs::String ToString() override;
    std::int32_t GetHashCode() override;
    static constexpr pls::cs::Int32 SP_FRAME_NO = 0;
    static constexpr pls::cs::Int32 SP_TEX_ID = 1;
    static constexpr pls::cs::Int32 SP_U = 2;
    static constexpr pls::cs::Int32 SP_V = 3;
    static constexpr pls::cs::Int32 SP_W = 4;
    static constexpr pls::cs::Int32 SP_H = 5;
    static constexpr pls::cs::Int32 SP_TRANS_X = 6;
    static constexpr pls::cs::Int32 SP_TRANS_Y = 7;
    static constexpr pls::cs::Int32 SP_REVERS_U = 8;
    static constexpr pls::cs::Int32 SP_REVERS_V = 9;
    static constexpr pls::cs::Int32 SP_BLEND = 10;
    static constexpr pls::cs::Int32 SP_COLOR = 11;
    static constexpr pls::cs::Int32 SP_END = 12;
    static constexpr pls::cs::Int32 TEXID_NONE = -1;
    static constexpr pls::cs::Int32 TEXID_FRECT = -2;
    static constexpr pls::cs::Int32 TEXID_RECT = -3;
    static constexpr pls::cs::Int32 TEXID_LINE = -4;
    static constexpr pls::cs::Int32 TEXID_HIDELINE = -8;
    static constexpr pls::cs::Int32 TEXID_HIDERECT = -9;
    static constexpr pls::cs::Int32 SPBUF_TEX = 0;
    static constexpr pls::cs::Int32 SPBUF_X = 1;
    static constexpr pls::cs::Int32 SPBUF_Y = 2;
    static constexpr pls::cs::Int32 SPBUF_U = 3;
    static constexpr pls::cs::Int32 SPBUF_V = 4;
    static constexpr pls::cs::Int32 SPBUF_W = 5;
    static constexpr pls::cs::Int32 SPBUF_H = 6;
    static constexpr pls::cs::Int32 SPBUF_FLAG = 7;
    static constexpr pls::cs::Int32 SPBUF_END = 8;
    static constexpr pls::cs::Int32 SPBUFEX_TEX = 0;
    static constexpr pls::cs::Int32 SPBUFEX_X = 1;
    static constexpr pls::cs::Int32 SPBUFEX_Y = 2;
    static constexpr pls::cs::Int32 SPBUFEX_U = 3;
    static constexpr pls::cs::Int32 SPBUFEX_V = 4;
    static constexpr pls::cs::Int32 SPBUFEX_W = 5;
    static constexpr pls::cs::Int32 SPBUFEX_H = 6;
    static constexpr pls::cs::Int32 SPBUFEX_END = 7;
    static void ensure_initialized();

    static pls::cs::Ref<Seb_WorkStaticValue>& threadLocalStatic_();

    static void create_2_init(pls::cs::Ref<Seb> self, pls::cs::Ref<Seb> seb);

    static void create_init(pls::cs::Ref<Seb> self, pls::cs::Array<std::uint8_t> data);

    static pls::cs::Ref<Seb_WorkStaticValue> GetWorkStaticValue();

    pls::cs::Ref<Seb_WorkValue> GetWorkValue();

    static void SetClip(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 w, pls::cs::Int32 h);

    static void ClearClip();

    static pls::cs::Ref<Seb> create(pls::cs::Array<std::uint8_t> data);

    static pls::cs::Ref<Seb> create_2(pls::cs::Ref<Seb> seb);

    void Dispose();

    void _load(pls::cs::Array<std::uint8_t> data);

    void _loadInputStream(pls::cs::Ref<generated::java::io::InputStream> stream);

    pls::cs::Array<pls::cs::Int32> GetBoundingRect();

    pls::cs::Array<std::int16_t> GetBoundingRect(pls::cs::Int32 frame);

    pls::cs::Int32 GetMaxFrame();

    void Frame();

    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> GetSprites(pls::cs::Int32 frameNo);

    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> GetSpritesLocal(pls::cs::Int32 frameNo);

    pls::cs::Array<pls::cs::Int32> GetSprite(pls::cs::Int32 frameNo, pls::cs::Int32 lineNo);

    pls::cs::Array<pls::cs::Int32> GetSpriteLocal(pls::cs::Int32 frameNo, pls::cs::Int32 lineNo);

    pls::cs::Array<pls::cs::Int32> ConvBufferToSprite(pls::cs::Int32 index,
                                                      pls::cs::Array<pls::cs::Int32> sprite);

    void DrawFrame(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                   pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img, pls::cs::Int32 frame,
                   pls::cs::Int32 lineNo);

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
              pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img, pls::cs::Int32 lineNo);

    void _draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
               pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img, pls::cs::Int32 frame,
               pls::cs::Int32 lineNo);

    void DrawIntArray(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                      pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img, pls::cs::Array<pls::cs::Int32> sp);

    pls::cs::Int32 GetLayersNum();

    void SetName(pls::cs::String name);

    void Reverse(bool u, bool v);

    void SetCacheSize(pls::cs::Int32 size);
};
} // namespace kairo::unity::ui
}
