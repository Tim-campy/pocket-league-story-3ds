// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.ui.Image.TextRenderTask.hpp"
namespace pls::game {
namespace kairo::unity::ui {

void Image_TextRenderTask::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::trace_value(Text,visitor);pls::cs::trace_value(Font,visitor);}

static PLS_NOINLINE void cs_init_fbfef5c19ac20749_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.Image.TextRenderTask",flag,[](){

});}

void Image_TextRenderTask::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_fbfef5c19ac20749_slow(flag);}

void Image_TextRenderTask::create_init(Image_TextRenderTask* self,pls::cs::String text,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor,pls::cs::Int32 color,pls::cs::Ref<pls::kairo::Font> font) {
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Image.TextRenderTask.#ctor(System.String,System.Single,System.Single,System.Int32,System.Int32,kairo.unity.ui.Font)",kairo);
{
{ auto cs_target = self; auto cs_value = text; require(cs_target)->Text = cs_value; }
{ auto cs_target = self; pls::cs::Single cs_value = x; require(cs_target)->X = cs_value; }
{ auto cs_target = self; pls::cs::Single cs_value = y; require(cs_target)->Y = cs_value; }
{ auto cs_target = self; pls::cs::Int32 cs_value = anchor; require(cs_target)->Anchor = cs_value; }
{ auto cs_target = self; pls::cs::Int32 cs_value = color; require(cs_target)->Color = cs_value; }
{ auto cs_target = self; auto cs_value = font; require(cs_target)->Font = cs_value; }
}

}

// M:kairo.unity.ui.Image.TextRenderTask.#ctor(System.String,System.Single,System.Single,System.Int32,System.Int32,kairo.unity.ui.Font)
Image_TextRenderTask Image_TextRenderTask::create(pls::cs::String text,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor,pls::cs::Int32 color,pls::cs::Ref<pls::kairo::Font> font) {
Image_TextRenderTask::ensure_initialized();
 Image_TextRenderTask self{}; Image_TextRenderTask::create_init(&self,text,x,y,anchor,color,font);return self;
}
} // namespace kairo::unity::ui
}
