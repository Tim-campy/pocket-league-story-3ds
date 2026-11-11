#include "graphics.hpp"
#include "sha256.hpp"
#include "application.hpp"
#include "resource_load_trace.hpp"
namespace pls::kairo {
namespace {
ImageRuntimeBindings runtime;
std::vector<cs::Ref<Image>> source_images{};
cs::GcRootProvider image_roots([](const cs::EdgeVisitor&visitor){
    for(const auto&image:source_images)cs::trace_value(image,visitor);
    runtime.check_count.trace_edges(visitor);runtime.count_enabled.trace_edges(visitor);
    runtime.adjust_create_area.trace_edges(visitor);runtime.read_source.trace_edges(visitor);
    runtime.measure_source.trace_edges(visitor);
    cs::trace_value(Image::getOptimize_result,visitor);cs::trace_value(Image::getOptimizeSeb_result,visitor);
    cs::trace_value(Image::getPaletteInfo_result,visitor);cs::trace_value(Image::getAreaSize_result,visitor);
});
std::int32_t source_pixels{},max_count{},max_pixels{},default_frames{},release_count{};
std::int32_t now(){return runtime.check_count?runtime.check_count():0;}
void area(std::int32_t delta){if(runtime.count_enabled&&runtime.count_enabled())runtime.adjust_create_area(delta);}
const assets::Entry& source_entry(cs::Array<std::uint8_t> bytes){
    if(!assets::installed_catalog)throw cs::InvalidOperationException("Authenticated image catalog is not installed");
    std::vector<std::uint8_t> raw(static_cast<std::size_t>(bytes.length()));for(std::int32_t i=0;i<bytes.length();++i)raw[static_cast<std::size_t>(i)]=bytes.at(i);
    const auto* entry=assets::installed_catalog->find(assets::Kind::image,assets::sha256(raw));
    if(!entry)throw cs::IOException("Image source is absent from the authenticated catalog");return *entry;
}
}
void install_image_runtime(ImageRuntimeBindings bindings){
    if(!bindings.check_count||!bindings.count_enabled||!bindings.adjust_create_area)throw cs::ArgumentException("Complete source image counter bindings are required");runtime=std::move(bindings);
}
void Image::track_created(const cs::Ref<Image>& image,bool generated){
    const auto pixels=cs::mul_i32(image->width_,image->height_);area(pixels);
    if(generated){image->created_image_=true;image->lock_expiration_=true;image->check_count_=now();source_images.push_back(image);source_pixels=cs::add_i32(source_pixels,pixels);}
}
cs::Ref<Image> Image::FromSource(cs::Array<std::uint8_t> bytes,Format f,Filter filter){
    const auto& entry=source_entry(bytes);auto image=cs::make_ref<Image>();image->source_bytes_=bytes;
    image->width_=static_cast<std::int32_t>(entry.width);image->height_=static_cast<std::int32_t>(entry.height);
    image->format=f==Format::Default?Format::ARGB32:f;image->filter=filter==Filter::Default?DEFAULT_FILTER:filter;return image;
}
cs::Ref<Image> Image::FromLoader(cs::Delegate<cs::Array<std::uint8_t>()> loader,Format f,Filter filter){
    if(!loader)throw cs::ArgumentNullException();auto image=cs::make_ref<Image>();image->source_loader_=std::move(loader);image->width_=image->height_=240;
    image->format=f==Format::Default?Format::ARGB32:f;image->filter=filter==Filter::Default?DEFAULT_FILTER:filter;return image;
}
cs::Ref<Image> Image::FromBytes(cs::Array<std::uint8_t> bytes,Format f,Filter filter){
    if(!runtime.measure_source)throw cs::InvalidOperationException("Generated image header reader is not installed");
    const auto size=runtime.measure_source(bytes);auto image=cs::make_ref<Image>();
    image->width_=size.at(0);image->height_=size.at(1);image->source_bytes_=bytes;
    image->format=f==Format::Default?DEFAULT_FORMAT:f;image->filter=filter==Filter::Default?DEFAULT_FILTER:filter;return image;
}
cs::Ref<Image> Image::FromRecord(std::int32_t rs,std::int32_t rc,cs::String file,cs::String palette,Format f,Filter filter){
    auto image=cs::make_ref<Image>();image->width_=image->height_=240;image->rs_id_=rs;image->rc_id_=rc;image->file_=file;image->palette_file_=palette;
    image->format=f==Format::Default?DEFAULT_FORMAT:f;image->filter=filter==Filter::Default?DEFAULT_FILTER:filter;return image;
}
void Image::Use(){
    if(alive_||disposed_||(source_bytes_.is_null()&&!source_loader_&&file_.is_null()))return;
    diagnostic::ResourceTimer timing("image-use-total",0);
    if(const auto app=IApplication::GetCurrentApp();app&&!app->CheckUiThread()){
        auto self=pls::cs::dynamic_pointer_cast<Image>(shared_from_this());auto raw=cs::raw(self);
        app->RunOnUiThread(cs::Delegate<void()>::bind(std::move(self),"Image.Use",[raw]{raw->Use();}),true);return;
    }
    auto bytes=source_bytes_;if(bytes.is_null()){
        if(source_loader_)bytes=source_loader_();
        else{if(!runtime.read_source)throw cs::InvalidOperationException("Generated image source reader is not installed");bytes=runtime.read_source(rs_id_,rc_id_,file_,palette_file_);}
    }if(bytes.is_null())return;
    timing.step("image-use-source");const auto& entry=source_entry(bytes);timing.step("image-use-identity");auto decoded=assets::installed_catalog->read(entry);timing.step("image-use-read");
    width_=static_cast<std::int32_t>(entry.width);height_=static_cast<std::int32_t>(entry.height);assign_pixels(std::move(decoded),std::filesystem::path(entry.path).extension()==".rgba8ctr");alive_=true;check_count_=now();
    timing.step("image-use-adopt-layout");
    auto self=pls::cs::dynamic_pointer_cast<Image>(shared_from_this());source_images.push_back(self);
    const auto pixels=cs::mul_i32(width_,height_);source_pixels=cs::add_i32(source_pixels,pixels);area(pixels);
    while(source_images.size()>1&&((max_count>0&&max_count<static_cast<std::int32_t>(source_images.size()))||(max_pixels>0&&max_pixels<source_pixels))){
        cs::Ref<Image> selected{};auto oldest=std::numeric_limits<std::int64_t>::min();
        for(std::size_t i=0;i+1<source_images.size();++i){const auto& candidate=source_images[i];
            const auto score=cs::sub_i64(cs::mul_i64(cs::sub_i32(now(),candidate->check_count_),1000),cs::mul_i32(candidate->width_,candidate->height_)/100);
            if(oldest<score){oldest=score;selected=candidate;}
        }
        if(!selected)throw cs::InvalidOperationException("Source image eviction made no selection");
        if(selected->created_image_)selected->Dispose();else selected->Unuse();
    }
    timing.step("image-use-cache");timing.finish();
}
void Image::Unuse(){
    if(!alive_||(!created_image_&&source_bytes_.is_null()&&!source_loader_&&file_.is_null()))return;
    if(const auto app=IApplication::GetCurrentApp();app&&!app->CheckUiThread()){
        auto self=pls::cs::dynamic_pointer_cast<Image>(shared_from_this());auto raw=cs::raw(self);
        app->RunOnUiThread(cs::Delegate<void()>::bind(std::move(self),"Image.Unuse",[raw]{raw->Unuse();}),true);return;
    }
    alive_=false;std::vector<std::uint8_t>().swap(rgba_);std::vector<std::uint8_t>().swap(ctr_rgba_);
    release_count=cs::add_i32(release_count,1);
    auto found=std::find_if(source_images.begin(),source_images.end(),[&](const auto& image){return cs::raw(image)==this;});if(found!=source_images.end())source_images.erase(found);
    const auto pixels=cs::mul_i32(width_,height_);source_pixels=cs::sub_i32(source_pixels,pixels);area(cs::neg_i32(pixels));
}
void Image::Dispose(){
    Unuse();if(alive_){area(cs::neg_i32(cs::mul_i32(width_,height_)));release_count=cs::add_i32(release_count,1);}
    alive_=false;std::vector<std::uint8_t>().swap(rgba_);std::vector<std::uint8_t>().swap(ctr_rgba_);source_bytes_={};source_loader_={};file_={};palette_file_={};images_={};optimize_={};width_=height_=0;disposed_=true;
}
void Image::SetSourceImageMaxCount(std::int32_t value){max_count=value;}
void Image::SetSourceImageMaxPixels(std::int32_t value){max_pixels=value;}
void Image::SetSourceImageValidateFrames(std::int32_t value){default_frames=value;}
void Image::UnuseExpirationImages(){
    if(!runtime.check_count)throw cs::InvalidOperationException("Generated Config image counter bindings are not installed");
    for(std::int32_t i=static_cast<std::int32_t>(source_images.size())-1;i>=0;--i){auto image=source_images[static_cast<std::size_t>(i)];const auto frames=image->validate_frames_==-1?default_frames:image->validate_frames_;
        if(frames>0&&!image->lock_expiration_&&cs::sub_i32(now(),image->check_count_)>frames){if(image->created_image_)image->Dispose();else image->Unuse();}
    }
}
void Image::source_drawn(){check_count_=now();}
std::array<std::int32_t,2> Image::native_cache_size(){return {static_cast<std::int32_t>(source_images.size()),source_pixels};}
std::int32_t Image::native_releases(){return release_count;}
void Image::trace_edges(const cs::EdgeVisitor& visitor)const{cs::Object::trace_edges(visitor);cs::trace_value(balloon_tasks_,visitor);cs::trace_value(text_tasks_,visitor);cs::trace_value(touch_tasks_,visitor);cs::trace_value(source_bytes_,visitor);cs::trace_value(source_loader_,visitor);cs::trace_value(file_,visitor);cs::trace_value(palette_file_,visitor);cs::trace_value(name_,visitor);cs::trace_value(images_,visitor);cs::trace_value(optimize_,visitor);cs::trace_value(optimizeAccess_,visitor);cs::trace_value(optimizeSeb_,visitor);cs::trace_value(optimizeEx_,visitor);cs::trace_value(optimizeAccessL_,visitor);cs::trace_value(optimizeSebEx_,visitor);}
void Image::release_edges(){cs::Object::release_edges();cs::release_value(balloon_tasks_);cs::release_value(text_tasks_);cs::release_value(touch_tasks_);cs::release_value(source_bytes_);cs::release_value(source_loader_);cs::release_value(file_);cs::release_value(palette_file_);cs::release_value(name_);cs::release_value(images_);cs::release_value(optimize_);cs::release_value(optimizeAccess_);cs::release_value(optimizeSeb_);cs::release_value(optimizeEx_);cs::release_value(optimizeAccessL_);cs::release_value(optimizeSebEx_);}
}
