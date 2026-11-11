#include "graphics.hpp"
#include "canvas.hpp"
#include "render_mode.hpp"
#include "managed_regex.hpp"
#include "managed_string_ops.hpp"
#include "kairo/platform/sdl/font.hpp"
#include "kairo/platform/null/sound.hpp"
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_SYNTHESIS_H
#include <iostream>
#include <stdexcept>
#include <thread>
int main(int argc,char**argv){
    using namespace pls;if(argc!=2)return 2;static_assert(kairo::null_render_backend);
    unsigned checks=0;auto require=[&](bool b){if(!b)throw std::runtime_error("Null backend contract failed");++checks;};
    auto image=kairo::Image::FromRgba(16,16,std::vector<std::uint8_t>(16*16*4,37));auto before=image->pixels();auto g=image->GetGraphics();
    int shapes=0,created_area=0;
    auto canvas=kairo::Canvas::GetInstance();
    // The installer stack disappears before collection: the installed global
    // bindings themselves must root every delegate invocation list.
    std::thread installer([&]{cs::GcMutatorScope active;
        kairo::GraphicsRuntimeBindings bindings;bindings.shape_drawn=cs::Delegate<void()>::from_static("own-null-shape",[&]{++shapes;});kairo::install_graphics_runtime(std::move(bindings));
        kairo::ImageRuntimeBindings images;
        images.check_count=cs::Delegate<int()>::from_static("own-image-clock",[]{return 0;});
        images.count_enabled=cs::Delegate<bool()>::from_static("own-image-count",[]{return true;});
        images.adjust_create_area=cs::Delegate<void(int)>::from_static("own-image-area",[&](int n){created_area+=n;});
        kairo::install_image_runtime(std::move(images));
    });
    {cs::GcNativeBlockingScope wait;installer.join();}
    cs::gc_collect();
    canvas->KeyDown(kairo::Canvas::KEY_SELECT);canvas->DecideKeyState();require(canvas->CheckKeyState(kairo::Canvas::KEY_SELECT));
    canvas->KeyUp(kairo::Canvas::KEY_SELECT);canvas->DecideKeyState();require(!canvas->CheckKeyState(kairo::Canvas::KEY_SELECT));
    require(kairo::Image::getOptimize_result.length()==7&&kairo::Image::getOptimizeSeb_result.length()==4);
    require(kairo::Image::getPaletteInfo_result.length()==2&&kairo::Image::getAreaSize_result.length()==2);
    auto second_image=kairo::Image::FromRgba(3,4,std::vector<std::uint8_t>(3*4*4,0));
    require(created_area==12&&second_image->pixels().size()==48);
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
#if PLS_TRACING_GC
    // A collector on another registered thread can park the producer at any
    // allocation. Previously accumulated items exist only in native vectors.
    std::atomic<bool> stop{false};std::atomic<unsigned> collections{0};std::exception_ptr failure;
    std::thread collector([&]{cs::GcMutatorScope active;try{while(!stop.load()){cs::gc_collect();++collections;std::this_thread::yield();}}catch(...){failure=std::current_exception();}});
    try{
        std::u16string text;for(int i=0;i<64;++i)text+=u"abc,";
        for(int pass=0;pass<40;++pass){
            const cs::String input(text);auto parts=cs::string_split(input,cs::Array<char16_t>::from({u','}));
            require(parts.length()==65);for(int i=0;i<64;++i)require(parts[i]==cs::String(u"abc"));
            auto matches=cs::RuntimeRegex::Matches(input,cs::String(u"(abc)"));require(matches->get_Count()==64);
            for(int i=0;i<64;++i)require(matches->get_Item(i)->get_Groups()->get_Item(1)->get_Value()==cs::String(u"abc"));
        }
    }catch(...){stop=true;{cs::GcNativeBlockingScope wait;collector.join();}throw;}
    stop=true;{cs::GcNativeBlockingScope wait;collector.join();}if(failure)std::rethrow_exception(failure);require(collections>0);
#endif
    std::cout<<"null-backend-pass checks="<<checks<<" fonts="<<fonts<<" audio="<<audio<<'\n';
}
