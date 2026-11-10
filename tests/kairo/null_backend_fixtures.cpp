#include "graphics.hpp"
#include "render_mode.hpp"
#include "kairo/platform/sdl/font.hpp"
#include "kairo/platform/null/sound.hpp"
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_SYNTHESIS_H
#include <iostream>
#include <stdexcept>
int main(int argc,char**argv){
    using namespace pls;if(argc!=2)return 2;static_assert(kairo::null_render_backend);
    unsigned checks=0;auto require=[&](bool b){if(!b)throw std::runtime_error("Null backend contract failed");++checks;};
    auto image=kairo::Image::FromRgba(16,16,std::vector<std::uint8_t>(16*16*4,37));auto before=image->pixels();auto g=image->GetGraphics();
    int shapes=0;kairo::GraphicsRuntimeBindings bindings;bindings.shape_drawn=cs::Delegate<void()>::from_static("own-null-shape",[&]{++shapes;});kairo::install_graphics_runtime(std::move(bindings));
    g->SetColor(255,0,0);g->FillRect(0,0,16,16);g->DrawLine(0,0,15,15);g->DrawRect(1,1,12,12);g->DrawArc(0,0,10,10,0,180,2);g->FillArc(0,0,10,10,0,180);
    require(image->pixels()==before);require(shapes==2);g->PushOrigin(3,4);require(g->GetOriginX()==3&&g->GetOriginY()==4);g->PopOrigin();require(g->GetOriginX()==0);
    assets::Catalog catalog(std::filesystem::u8path(argv[1]));std::size_t fonts=0;
    for(auto*entry:catalog.entries(assets::Kind::font)){
        catalog.verify(*entry);const auto path=catalog.path(*entry);sdl::RasterFont raster(path,18);
        FT_Library library{};FT_Face face{};require(!FT_Init_FreeType(&library));require(!FT_New_Face(library,path.u8string().c_str(),0,&face));require(!FT_Set_Pixel_Sizes(face,0,18));
        for(int style=0;style<3;++style){
            float expected=0;std::uint32_t previous=0;const std::u16string text=u"Ab09 xyz";
            for(auto c:text){require(!FT_Load_Char(face,c,FT_LOAD_DEFAULT));if(style==1)FT_GlyphSlot_Embolden(face->glyph);else if(style==2)FT_GlyphSlot_Oblique(face->glyph);require(!FT_Render_Glyph(face->glyph,FT_RENDER_MODE_NORMAL));
                auto index=FT_Get_Char_Index(face,c);FT_Vector kern{};if(previous&&index&&FT_HAS_KERNING(face))require(!FT_Get_Kerning(face,previous,index,FT_KERNING_DEFAULT,&kern));expected+=float(kern.x)/64.0f;expected+=float(face->glyph->advance.x)/64.0f;previous=index;
                require(raster.glyph(c,sdl::FontStyle(style)).rgba8.empty());
            }
            require(raster.measure_utf16(text,sdl::FontStyle(style))==expected);
        }
        require(raster.memory().cached_rgba8_bytes==0);FT_Done_Face(face);FT_Done_FreeType(library);++fonts;
    }
    require(fonts>0);std::size_t audio=0;for(auto*entry:catalog.entries(assets::Kind::audio)){catalog.verify(*entry);auto seconds=null_backend::ogg_seconds(catalog.path(*entry));require(seconds>0&&seconds<3600);++audio;}
    std::cout<<"null-backend-pass checks="<<checks<<" fonts="<<fonts<<" audio="<<audio<<'\n';
}
